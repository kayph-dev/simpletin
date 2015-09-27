#ifndef __SIMPLETIN_GLOB_H__
#define __SIMPLETIN_GLOB_H__

int match(char *regex, char *string);
int is_literal(char *txt);
int find(char *text,char *pat,int *from,int *to,char *fastener);
char* get_fastener(char *txt, char *mbl);

#endif /* end of include guard: __SIMPLETIN_GLOB_H__ */
