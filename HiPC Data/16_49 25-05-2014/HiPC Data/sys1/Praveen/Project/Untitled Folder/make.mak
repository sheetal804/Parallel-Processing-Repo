expx:main.o fact.o power.o
	gcc main.o fact.o power.o -o expr
main.o:main.c
	gcc -c main.c
fact.o:fact.c
	gcc -c fact.c
power.o:power.c
	gcc -c power.c
