#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <glib.h>
#include <pcre.h>
#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include "tintin.h"
#include "trigger.h"
#include "print.h"
#include "scripting/lua.h"


bool add_trigger(struct session *ses, const char *name, const char *desc,
    const char *pattern, int callback)
{
    const char *error_str;
    int error_off;

    pcre *reg = pcre_compile(pattern, 0, &error_str, &error_off, NULL);

    if (!reg) {
        tintin_printf(NULL, "[Trigger] Failed to compile pattern '%s': %s",
                        pattern, error_str);
        return false;
    }

    struct trigger *trig = malloc(sizeof(*trig));

    if (trig) {
        trig->name = strdup(name);
        trig->desc = strdup(desc);
        trig->pattern = strdup(pattern);
        trig->reg = reg;
        trig->callback = callback;

        ses->triggers = g_slist_prepend(ses->triggers, trig);

        return true;
    }

    return false;
}

void process_triggers(struct session *ses, const char *line)
{
    for (GSList *iter = ses->triggers; iter; iter = iter->next) {
        struct trigger *trig = iter->data;

        int subs[30];
        int ret = pcre_exec(trig->reg, NULL, line, strlen(line), 0, 0, subs, 30);

        if (ret < 0) {
            if (ret != PCRE_ERROR_NOMATCH)
                tintin_printf(NULL, "[Trigger] Error matching trigger '%s'",
                                trig->name);
            continue;
        }

        /* get callback function from registry index */
        lua_rawgeti(ses->lua, LUA_REGISTRYINDEX, trig->callback);
        luaL_checktype(ses->lua, -1, LUA_TFUNCTION);

        /* create table with all matches */
        lua_createtable(ses->lua, ret - 1, 0);
        for (int i=1; i < ret; i++) {
            size_t start = subs[2 * i];
            size_t end = subs[2 * i + 1];
            size_t length = end - start;
            char match[1024];

            memcpy(match, line + start, length);
            match[length] = '\0';

            lua_pushinteger(ses->lua, i);
            lua_pushstring(ses->lua, match);
            lua_settable(ses->lua, -3);
        }

        /* call function */
        if (lua_pcall(ses->lua, 1, 0, 0) != 0) {
            tintin_printf(NULL, "[Trigger] Failed to call function: %s", lua_tostring(ses->lua, -1));
            lua_pop(ses->lua, 1);
        }
    }
}

void destroy_trigger(struct trigger *trig)
{
    free(trig->name);
    free(trig->desc);
    free(trig->pattern);
    pcre_free(trig->reg);
    free(trig);
}
