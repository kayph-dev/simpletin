#ifndef __SIMPLETIN_UTILS_H__
#define __SIMPLETIN_UTILS_H__

int is_abrev(char *s1, char *s2);
char* mystrdup(char *s);
void syserr(char *msg, ...);
size_t strlcpy(char *dst, const char *src, size_t n);

#endif /* end of include guard: __SIMPLETIN_UTILS_H__ */
