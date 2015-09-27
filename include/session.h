#ifndef __SIMPLETIN_SESSION_H__
#define __SIMPLETIN_SESSION_H__

void make_name(char *str, char *basis, int run);
struct session *newactive_session(void);
void cleanup_session(struct session *ses);
void seslist(char *result);

#endif /* end of include guard: __SIMPLETIN_SESSION_H__ */
