#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <glib.h>
#include <pcre.h>

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
    tintin_printf(NULL, "HERE: %d", g_slist_length(ses->triggers));
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

        /* match a trigger, call callback! */
        l_call_trigger(ses, trig);
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
