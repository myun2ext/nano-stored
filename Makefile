all:
	gcc allocation.c bank.c writer.c test.c -I include -O3 -o a.out
	./a.out