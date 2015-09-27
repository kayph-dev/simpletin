struct hashtable* init_hash();
void kill_hash(struct hashtable* h);
void set_hash(struct hashtable *h, char *key, char *value);
void set_hash_nostring(struct hashtable *h, char *key, char *value);
char* get_hash(struct hashtable *h, char *key);
int delete_hash(struct hashtable *h, char *key);
struct listnode* hash2list(struct hashtable *h, char *pat);
struct hashtable* copy_hash(struct hashtable *h);
