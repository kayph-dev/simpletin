#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#include "tintin.h"
#include "print.h"
#include "trigger.h"

static struct session *get_session(lua_State *s)
{
    lua_getglobal(s, "session");

    if (!lua_isuserdata(s, -1))
        return NULL;

    struct session *ses = lua_touserdata(s, -1);
    lua_pop(s, 1);

    return ses;
}

static int trigger_add(lua_State *s)
{
    const char *name = luaL_checkstring(s, 1);
    const char *desc = luaL_checkstring(s, 2);
    const char *pattern = luaL_checkstring(s, 3);

    luaL_checktype(s, 4, LUA_TFUNCTION);

    lua_pushvalue(s, 4);
    int cb = luaL_ref(s, LUA_REGISTRYINDEX);

    struct session *ses = get_session(s);

    if (add_trigger(ses, name, desc, pattern, cb))
        tintin_printf(NULL, "[Trigger] \"%s\" added.", name);

    return 0;
}

static const struct luaL_Reg trigger_lib[] = {
    { "add", trigger_add },
    { NULL, NULL }
};

int luaopen_trigger(lua_State *s)
{
    luaL_register(s, "trigger", trigger_lib);

    return 1;
}
