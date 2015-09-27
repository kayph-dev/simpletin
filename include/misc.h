int yes_no(char *txt);
struct session* all_command(char *arg,struct session *ses);
struct session* zap_command(char *arg, struct session *ses);
void tablist(struct completenode *tcomplete);
void tab_add(char *arg, struct session *ses);
void tab_delete(char *arg, struct session *ses);
int isnotblank(char *line,int flag);
int iscompleteprompt(char *line);
int ord_inline(char *arg,struct session *ses);
