#ifndef _LIBRESPONDD_H_
#define _LIBRESPONDD_H_

#include <stdint.h>

enum {
	RESPONDD_CB_OK,
	RESPONDD_CB_CANCEL,
	RESPONDD_CB_ERROR
};

typedef int (*respondd_cb)(char* json_data, size_t data_len, void* priv);

int request(const struct ip6_inaddr*, const char* query, unsigned long timeout_ms, respondd_cb callback, void* cb_priv);

#endif
