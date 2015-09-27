void telnet_resize_all(void);
int do_telnet_protocol(char *data, int nb, struct session *ses);
void telnet_write_line(char *line, struct session *ses);
