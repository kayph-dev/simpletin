#ifndef __SIMPLETIN_FILES_H__
#define __SIMPLETIN_FILES_H__

void read_complete(char *arg, struct session *ses);
void log_off(struct session *ses);
void write_logf(struct session *ses, char *txt, char *prefix, char *suffix);
void write_log(struct session *ses, char *txt, int n);
void debuglog(struct session *ses, const char *format, ...);
struct session* do_read(FILE *myfile, char *filename, struct session *ses);
struct session* read_command(char *filename, struct session *ses);

#endif /* end of include guard: __SIMPLETIN_FILES_H__ */
