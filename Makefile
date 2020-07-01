all: forkitgrm

clean:
	rm -f forkitgrm

forkitgm: forkitgm.c
	gcc -o forkitgrm forkitgrm.c

debug: forkitgrm.c
	gcc -o forkitgrm forkitgrm.c -O0 -g -Wall


