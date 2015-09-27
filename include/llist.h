#ifndef __SIMPLETIN_LLIST_H__
#define __SIMPLETIN_LLIST_H__

struct listnode* init_list(void);
void kill_list(struct listnode *nptr);
void zap_list(struct listnode *nptr);
void kill_all(struct session *ses, int mode);
struct listnode* copy_list(struct listnode *sourcelist,int mode);
void insertnode_list(struct listnode *listhead, char *ltext, char *rtext, char *prtext, int mode);
void deletenode_list(struct listnode *listhead, struct listnode *nptr);
struct listnode* searchnode_list(struct listnode *listhead, char *cptr);
void shownode_list(struct listnode *nptr);
void shownode_list_action(struct listnode *nptr);
void show_list(struct listnode *listhead);
void show_list_action(struct listnode *listhead);
struct listnode* search_node_with_wild(struct listnode *listhead, char *cptr);
void addnode_list(struct listnode *listhead, char *ltext, char *rtext, char *prtext);
int count_list(struct listnode *listhead);

#endif /* end of include guard: __SIMPLETIN_LLIST_H__ */
