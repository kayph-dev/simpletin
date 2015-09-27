#ifndef __SIMPLETIN_UNICODE_H__
#define __SIMPLETIN_UNICODE_H__

#define WC wchar_t
#define WCL sizeof(WC)
#define WCI wint_t
#define WCC "%lc"
#define WClen wcslen
#define WCcpy wcscpy
#define TO_WC(d,s) utf8_to_wc(d,s,-1)
#define FROM_WC(d,s,n) wc_to_utf8(d,s,n,BUFFER_SIZE*8)
#define WRAP_WC(d,s) wc_to_utf8(d,s,-1,BUFFER_SIZE)
#define OUT_WC(d,s,n) wc_to_mb(d,s,n,OUTSTATE)
#define FLATlen utf8_width
int wcwidth(WC ucs);
int wcswidth(const WC *pwcs, size_t n);
void utf8_to_local(char *d, char *s);
void cleanup_conv(struct charset_conv *conv);
void convert(struct charset_conv *conv, char *outbuf, char *inbuf, int dir);
int new_conv(struct charset_conv *conv, char *name, int dir);
void local_to_utf8(char *d, char *s, int maxb, mbstate_t *cs);
void nullify_conv(struct charset_conv *conv);
void init_locale();
int wc_to_utf8(char *d, const wchar_t *s, int n, int maxb);
int utf8_to_wc(wchar_t *d, char *s, int n);
int utf8_width(char *s);
int one_utf8_to_mb(char **d, char **s, mbstate_t *cs);
int wc_to_mb(char *d, wchar_t *s, int n, mbstate_t *cs);
char translit(wchar_t ch);
void utf8_to_mb(char **d, char *s, mbstate_t *cs);
#if 0
#define WC char
#define WCL 1
#define WCI int
#define WCC "%c"
#define WClen strlen
#define WCcpy strcpy
#define TO_WC(d,s) strcpy(d,s)
#define FROM_WC(d,s,n) (memcpy(d,s,n),n)
#define WRAP_WC(d,s) strcpy(d,s)
#define OUT_WC(d,s,n) (memcpy(d,s,n),n)
#define FLATlen strlen
#define iswalnum(x) isalnum(x)
#define iswupper(x) isupper(x)
#define towupper(x) toupper(x)
#define towlower(x) tolower(x)
#endif

#endif /* end of include guard: __SIMPLETIN_UNICODE_H__ */
