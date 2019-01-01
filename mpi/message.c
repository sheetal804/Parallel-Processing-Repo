#include "mpi.h"
#include <stdio.h>
#include<string.h>
#define max 100
int main(int argc,char *argv[])
{
	
	int myRank,p;
	int numProc;
	int source;
	int dest;
	int tag=0;
	char mess[max];
	int count;
	MPI_Status status;
	MPI_Init(&argc,&argv);
	MPI_Comm_size(MPI_COMM_WORLD,&p);
        MPI_Comm_rank(MPI_COMM_WORLD,&myRank);
	if(myRank!=0)
	{
		sprintf(mess,"hello from %d",myRank);
		dest=0;
		count=strlen(mess)+1;
		MPI_Send(mess,count,MPI_CHAR,dest,tag,MPI_COMM_WORLD);
	}
	else
	{
	for(source=1;source<p;source++)
	{
		MPI_Recv(mess,max,MPI_CHAR,source,tag,MPI_COMM_WORLD,&status);
		printf("%s\n",mess);
	}
	}
	MPI_Finalize();
	return 0;
}

