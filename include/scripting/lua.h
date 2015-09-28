#ifndef __SIMPLETIN_SCRIPTING_LUA_H__
#define __SIMPLETIN_SCRIPTING_LUA_H__

struct session;

void setup_scripting_environment(struct session *ses);
void destroy_scripting_environment(struct session *ses);

#endif /* end of include guard: __SIMPLETIN_SCRIPTING_LUA_H__ */
