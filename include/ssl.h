#ifndef __SIMPLETIN_SSL_H__
#define __SIMPLETIN_SSL_H__

gnutls_session_t ssl_negotiate(int sock, char *host, struct session *oldses);

#endif /* end of include guard: __SIMPLETIN_SSL_H__ */
