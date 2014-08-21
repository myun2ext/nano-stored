all:
	gcc test.c -I include -O3 -o a.out
	./a.out