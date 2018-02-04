CP?=cp -r
LN?=ln -s
FPIC?=-fPIC

all: librespondd

librespondd:
	$(CC) -c ${CFLAGS} $(FPIC) -o librespondd.o librespondd.c -Wall
	$(CC) -shared $(FPIC) -Wl,-soname,librespondd.so.0 -o librespondd.so.0 librespondd.o -lc

install:
	$(CP) librespondd.h /usr/include/librespondd-0
	$(CP) librespondd.so.o /usr/lib
	$(LN) /usr/lib/librespondd.so.o /usr/lib/respondd.so

clean:
	rm librespondd.so
