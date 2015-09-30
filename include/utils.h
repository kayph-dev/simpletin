#ifndef __SIMPLETIN_UTILS_H__
#define __SIMPLETIN_UTILS_H__

int is_abrev(char *s1, char *s2);

/**
 * @brief Check to see if string ends with needle (case insensitive!)
 */
int endswith(const char *string, const char *needle);

char* mystrdup(char *s);
void syserr(char *msg, ...);
size_t strlcpy(char *dst, const char *src, size_t n);

#endif /* end of include guard: __SIMPLETIN_UTILS_H__ */
