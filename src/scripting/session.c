#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

#include "tintin.h"
#include "net.h"
#include "scripting/lua.h"

static int session_write(lua_State *state)
{
    const char *text = luaL_checkstring(state, 1);
    struct session *ses = get_session(state);

    write_line_mud(text, ses);

    return 0;
}

static const struct luaL_Reg session_lib[] = {
    { "write", session_write },
    { NULL, NULL }
};

int luaopen_session(lua_State *s)
{
    luaL_register(s, "session", session_lib);

    return 1;
}
