#ifndef __SIMPLETIN_SCRIPTING_LUA_H__
#define __SIMPLETIN_SCRIPTING_LUA_H__

struct session;

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

#endif /* end of include guard: __SIMPLETIN_SCRIPTING_LUA_H__ */
