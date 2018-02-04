#ifndef _LIBRESPONDD_H_
#define _LIBRESPONDD_H_

#include <stdint.h>
#include <sys/time.h>

enum {
	RESPONDD_CB_OK = 0,
	RESPONDD_CB_CANCEL
};

typedef int (*respondd_cb)(char* json_data, size_t data_len, void* priv);

int respondd_request(const struct in6_addr* dst, const char* query, struct timeval *timeout, respondd_cb callback, void* cb_priv);

#endif
