struct session* parse_input(char *input,int override_verbatim,struct session *ses);
void init_parse();
char* get_inline(char *s, char *arg);
char* get_arg_in_braces(char *s,char *arg,int flag);
char* get_arg(char *s,char *arg,int flag,struct session *ses);
char* space_out(char *s);
void prompt(struct session *ses);
