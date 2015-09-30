#ifndef __SIMPLETIN_TRIGGER_H__
#define __SIMPLETIN_TRIGGER_H__

#include <pcre.h>
#include <stdbool.h>

struct session;

struct trigger {
    pcre *reg;
    char *name;
    char *desc;
    char *pattern;
    int callback;
};

bool add_trigger(struct session *ses, const char *name, const char *desc,
    const char *pattern, int callback);
void process_triggers(struct session *ses, const char *line);
void destroy_trigger(struct trigger *trig);

#endif /* end of include guard: __SIMPLETIN_TRIGGER_H__ */
