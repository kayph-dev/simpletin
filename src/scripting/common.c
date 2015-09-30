#include <lua.h>

struct session *get_session(lua_State *state)
{
    lua_getglobal(state, "session");

    if (!lua_isuserdata(state, -1))
        return NULL;

    struct session *ses = lua_touserdata(state, -1);
    lua_pop(state, 1);

    return ses;
}
