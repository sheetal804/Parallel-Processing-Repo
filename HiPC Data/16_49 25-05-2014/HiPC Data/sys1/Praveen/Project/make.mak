hello:main.o add.o
	gcc main.o add.o -o hello
main.o:main.c
	gcc -c main.c
add.o:add.c
	gcc -c add.c
