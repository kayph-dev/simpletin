#ifndef __SIMPLETIN_RUN_H__
#define __SIMPLETIN_RUN_H__

void pty_resize(int fd,int sx,int sy);
int run(char *command);
FILE* mypopen(char *command, int wr);
void pty_write_line(char *line, struct session *ses);

#endif /* end of include guard: __SIMPLETIN_RUN_H__ */
