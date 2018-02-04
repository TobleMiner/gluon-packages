all: gluon-neighbour-info

gluon-neighbour-info:
	$(CC) -c ${CFLAGS} gluon-neighbour-info.c -o gluon-neighbour-info.o -I/usr/include/librespondd-0
	$(CC) gluon-neighbour-info.o -o gluon-neighbour-info -lrespondd

clean:
	rm gluon-neighbour-info
