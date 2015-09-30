#include <stdio.h>
#include <stdlib.h>

#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include "tintin.h"
#include "print.h"
#include "utils.h"
#include "scripting/lua.h"


static void build_script_path(const char *name, char *out, size_t max);
static void open_libraries(struct session *ses);
static void init_variables(struct session *ses);


void setup_scripting_environment(struct session *ses)
{
    ses->lua = luaL_newstate();

    if (!ses->lua)
        return;

    open_libraries(ses);
    init_variables(ses);

    if (!execute_script_file(ses, "init")) {
        tintin_printf(NULL, "[Lua]: %s", lua_tostring(ses->lua, -1));
        lua_pop(ses->lua, 1);
    }
}

void destroy_scripting_environment(struct session *ses)
{
    lua_close(ses->lua);
    ses->lua = NULL;
}

int execute_script_file(struct session *ses, const char *name)
{
    char path[1024];

    build_script_path(name, path, 1024);

    return !(luaL_loadfile(ses->lua, path) || lua_pcall(ses->lua, 0, 0, 0));
}


static void build_script_path(const char *name, char *out, size_t max)
{
    char *home = getenv("HOME");
    char *format = "%s/%s/scripts/%s";

    if (!endswith(name, ".lua"))
        format = "%s/%s/scripts/%s.lua";

    snprintf(out, max, format, home, CONFIG_DIR, name);
}

static void open_libraries(struct session *ses)
{
    luaL_openlibs(ses->lua);
    luaopen_terminal(ses->lua);
    luaopen_trigger(ses->lua);
    luaopen_network(ses->lua);
}

static void init_variables(struct session *ses)
{
    /* setup global session variable */
    lua_pushlightuserdata(ses->lua, ses);
    lua_setglobal(ses->lua, "_session");
}
