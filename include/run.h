void pty_resize(int fd,int sx,int sy);
int run(char *command);
FILE* mypopen(char *command, int wr);
void pty_write_line(char *line, struct session *ses);
