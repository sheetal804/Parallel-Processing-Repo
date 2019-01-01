#include "mpi.h"
#include<stdio.h>
int main(int argc,char *argv[])
{
	MPI_Init(&argc,&argv);
	printf("HELLO WORLD\n");
	MPI_Finalize();
return 0;
}
