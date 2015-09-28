#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#include "tintin.h"
#include "print.h"

static int terminal_write(lua_State *s)
{
    int index = 1;
    struct session *ses = NULL;

    if (lua_islightuserdata(s, -1))
        ses = lua_touserdata(s, index++);

    const char *text = luaL_checkstring(s, index);

    if (text)
        tintin_eprintf(ses, text);

    return 0;
}

static const struct luaL_Reg terminal_lib[] = {
    { "write", terminal_write },
    { NULL, NULL }
};

int luaopen_terminal(lua_State *s)
{
    luaL_register(s, "terminal", terminal_lib);

    return 1;
}
