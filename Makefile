all:map_test
CFLAGS=-g -O0 -Wall

map_test:test_map.o rbtree.o
	gcc -o $@ $^ $(CFLAGS)
test_map.o:test_map.c
rbtree.o:rbtree.h rbtree.c

.PHONY:clean

clean:
	rm *.o map_test
