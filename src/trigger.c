#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include <glib.h>
#include <pcre.h>

#include "tintin.h"
#include "trigger.h"
#include "print.h"

struct trigger {
    pcre *reg;
    char *name;
    char *desc;
    char *pattern;
};


bool add_trigger(struct session *ses, const char *name, const char *desc,
    const char *pattern)
{
    const char *error_str;
    int error_off;

    pcre *reg = pcre_compile(pattern, 0, &error_str, &error_off, NULL);

    if (!pattern) {
        tintin_printf(NULL, "[Trigger] failed to compile pattern '%s': %s",
                        pattern, error_str);
        return false;
    }

    struct trigger *trig = malloc(sizeof(*trig));

    if (trig) {
        trig->name = strdup(name);
        trig->desc = strdup(desc);
        trig->pattern = strdup(pattern);
        trig->reg = reg;

        ses->triggers = g_slist_prepend(ses->triggers, trig);

        return true;
    }

    return false;
}

void process_triggers(struct session *ses, const char *line)
{
    if (!ses->triggers)
        if (add_trigger(ses, "say trigger", "triggered when I say somethign", "^You say"))
            tintin_printf(NULL, "Added");

    for (GSList *iter = ses->triggers; iter; iter = iter->next) {
        struct trigger *trig = iter->data;

        int subs[30];
        int ret = pcre_exec(trig->reg, NULL, line, strlen(line), 0, 0, subs, 30);

        if (ret < 0) {
            if (ret != PCRE_ERROR_NOMATCH)
                tintin_printf(NULL, "[Trigger] Error matching trigger '%s'",
                                trig->name);
            continue;
        }

        tintin_printf(NULL, "Matched trigger '%s'", trig->name);
    }
}

void destroy_trigger(struct trigger *trig)
{
    free(trig->name);
    free(trig->desc);
    free(trig->pattern);
    pcre_free(trig->reg);
    free(trig);
}
