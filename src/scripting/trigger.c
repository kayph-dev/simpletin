#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#include "tintin.h"
#include "print.h"
#include "trigger.h"
#include "scripting/lua.h"


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
