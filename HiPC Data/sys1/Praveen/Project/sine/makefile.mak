sine: sine_main.o mysine.o power.o fact.o
	gcc sine_main.o mysine.o power.o fact.o -o sine
sine_main.o:sine_main.c
	gcc -c sine_main.c
mysine.o:mysine.c
	gcc -c mysine.c
power.o:power.c
	gcc -c power.c
fact.o:fact.c
	gcc -c fact.c
