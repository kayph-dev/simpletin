#ifndef __SIMPLETIN_PRINT_H__
#define __SIMPLETIN_PRINT_H__

struct session;

void tintin_puts(char *cptr, struct session *ses);
void tintin_puts1(char *cptr, struct session *ses);
void tintin_printf(struct session *ses, const char *format, ...);
void tintin_eprintf(struct session *ses, const char *format, ...);

#endif /* end of include guard: __SIMPLETIN_PRINT_H__ */
