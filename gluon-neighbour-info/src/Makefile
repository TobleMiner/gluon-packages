all: gluon-neighbour-info

gluon-neighbour-info: gluon-neighbour-info.c
	$(CC) ${CPPFLAGS} ${CFLAGS} ${LDFLAGS} -o $@ $^ $(LDLIBS) -lrespondd

clean:
	rm gluon-neighbour-info
