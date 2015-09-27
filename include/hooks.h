#ifndef __SIMPLETIN_HOOKS_H__
#define __SIMPLETIN_HOOKS_H__

struct session* do_hook(struct session *ses, int t, char *data, int blockzap);
void set_magic_hook(struct session *ses);

#endif /* end of include guard: __SIMPLETIN_HOOKS_H__ */
