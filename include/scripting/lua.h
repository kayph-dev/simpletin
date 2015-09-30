#ifndef __SIMPLETIN_SCRIPTING_LUA_H__
#define __SIMPLETIN_SCRIPTING_LUA_H__

#include <lua.h>

struct session;
struct trigger;

/**
 * @brief Initialize the scripting environment for the session.
 */
void setup_scripting_environment(struct session *ses);

/**
 * @brief Destroy the scripting environment for the session.
 */
void destroy_scripting_environment(struct session *ses);

/**
 * @brief Loads a script file from its home path.
 *
 * @param ses session to load script file to.
 * @param name name of script file with or without extension.
 * @return 0 on error, 1 on success.
 */
int execute_script_file(struct session *ses, const char *name);

int luaopen_terminal(lua_State *s);
int luaopen_trigger(lua_State *s);

void l_call_trigger(struct session *ses, struct trigger *trig);

#endif /* end of include guard: __SIMPLETIN_SCRIPTING_LUA_H__ */
