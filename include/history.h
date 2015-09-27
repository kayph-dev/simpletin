#ifndef __SIMPLETIN_HISTORY_H__
#define __SIMPLETIN_HISTORY_H__

void do_history(char *buffer, struct session *ses);
struct session* parse_history(char *command, char *arg, struct session *ses);

#endif /* end of include guard: __SIMPLETIN_HISTORY_H__ */
