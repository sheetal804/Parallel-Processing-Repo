hello:nt.o length.o
	gcc nt.o length.o -o hello
nt.o:nt.c
	gcc -c nt.c
length.o:length.c
	gcc -c length.c
