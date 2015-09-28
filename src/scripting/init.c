#include <lua.h>
#include <lauxlib.h>
#include <lualib.h>

#include "tintin.h"
#include "print.h"
#include "scripting/lua.h"


void setup_scripting_environment(struct session *ses)
{
    ses->lua = luaL_newstate();

    if (!ses->lua)
        return;

    luaL_openlibs(ses->lua);
}

void destroy_scripting_environment(struct session *ses)
{
    lua_close(ses->lua);
    ses->lua = NULL;
}
