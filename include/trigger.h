#ifndef __SIMPLETIN_TRIGGER_H__
#define __SIMPLETIN_TRIGGER_H__

#include <stdbool.h>

struct session;
struct trigger;

bool add_trigger(struct session *ses, const char *name, const char *desc,
    const char *pattern);
void process_triggers(struct session *ses, const char *line);
void destroy_trigger(struct trigger *trig);

#endif /* end of include guard: __SIMPLETIN_TRIGGER_H__ */
