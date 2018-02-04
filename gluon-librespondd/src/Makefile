FPIC?=-fPIC

all: librespondd

librespondd:
	$(CC) -c ${CFLAGS} $(FPIC) -o librespondd.o librespondd.c -Wall
	$(CC) -shared $(FPIC) -Wl,-soname,librespondd.so.0 -o librespondd.so.0 librespondd.o -lc

clean:
	rm librespondd.so
