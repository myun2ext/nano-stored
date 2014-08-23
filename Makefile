all:
	gcc allocation.c bank.c writer.c test.c -I include -O3 -o a.out
	./a.out
sizes:
	gcc test/size_dump.c -I include -o a.out
	./a.out
allocation:
	gcc allocation.c test/allocation.c -I include -o a.out
	./a.out
