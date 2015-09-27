void set_variable(char *left,char *right,struct session *ses);
void substitute_myvars(char *arg,char *result,struct session *ses);
int listlength_inline(char *arg,struct session *ses);
int finditem_inline(char *arg,struct session *ses);
int isatom(char *arg);
int isatom_inline(char *arg,struct session *ses);
int strlen_inline(char *arg, struct session *ses);
int random_inline(char *arg, struct session *ses);
int strcmp_inline(char *line, struct session *ses);
