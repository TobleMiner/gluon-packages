all: gluon-neighbour-info

gluon-neighbour-info:
	$(CC) -c ${CFLAGS} gluon-neighbour-info.c -o gluon-neighbour-info.o -I/usr/local/include/librespondd-0 -ggdb
	$(CC) gluon-neighbour-info.o -o gluon-neighbour-info -L/usr/local/lib -lrespondd

clean:
	rm gluon-neighbour-info
