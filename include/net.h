#ifndef __SIMPLETIN_NET_H_
#define __SIMPLETIN_NET_H_

int connect_mud(char *host, char *port, struct session *ses);
int connect_mud(char *host, char *port, struct session *ses);
void write_line_mud(char *line, struct session *ses);
void flush_socket(struct session *ses);
int write_socket(struct session *ses, char *buffer, int len);
int read_buffer_mud(char *buffer, struct session *ses);

#endif /* end of include guard: __SIMPLETIN_NET_H_ */
