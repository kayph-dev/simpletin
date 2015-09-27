void prepare_actionalias(char *string, char *result, struct session *ses);
void substitute_vars(char *arg, char *result);
void check_all_actions(char *line, struct session *ses);
void check_all_promptactions(char *line, struct session *ses);
int match_inline(char *arg, struct session *ses);
int check_one_action(char *line, char *action, pvars_t *vars, int inside, struct session *ses);
