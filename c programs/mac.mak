hello:myatoi.o mystrlen.o
	gcc myatoi.o mystrlen.o -o hello
myatoi.o:myatoi.c
	gcc -c myatoi.c
mystlen.o:mystrlen.c
	gcc -c mystrlen.c
