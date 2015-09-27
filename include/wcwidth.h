#ifndef __SIMPLETIN_WCWIDTH_H__
#define __SIMPLETIN_WCWIDTH_H__

int wcwidth(wchar_t ucs);
int wcswidth(const wchar_t *pwcs, size_t n);

#endif /* end of include guard: __SIMPLETIN_WCWIDTH_H__ */
