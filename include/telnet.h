#ifndef __SIMPLETIN_TELNET_H__
#define __SIMPLETIN_TELNET_H__

void telnet_resize_all(void);
int do_telnet_protocol(char *data, int nb, struct session *ses);
void telnet_write_line(char *line, struct session *ses);

#endif /* end of include guard: __SIMPLETIN_TELNET_H__ */
