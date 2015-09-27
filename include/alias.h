#ifndef __SIMPLETIN_ALIAS_H__
#define __SIMPLETIN_ALIAS_H__

void show_hashlist(struct session *ses, struct hashtable *h, char *pat, const char *msg_all, const char *msg_none);
void delete_hashlist(struct session *ses, struct hashtable *h, char *pat, const char *msg_ok, const char *msg_none);

#endif /* end of include guard: __SIMPLETIN_ALIAS_H__ */
