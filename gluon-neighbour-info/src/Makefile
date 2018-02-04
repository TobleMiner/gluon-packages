all: gluon-neighbour-info

gluon-neighbour-info:
	$(CC) ${CPPFLAGS} ${CFLAGS} ${LDFLAGS} -shared -fPIC -o $@ $^ $(LDLIBS) -lrespondd

clean:
	rm gluon-neighbour-info
