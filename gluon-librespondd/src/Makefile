all: librespondd

librespondd:
	$(CC) -c ${CFLAGS} -fPIC -o librespondd.o librespondd.c
	$(CC) -shared -fPIC -Wl,-soname,librespondd.so.0 -o librespondd.so.0 librespondd.o -lc

clean:
	rm librespondd.so
