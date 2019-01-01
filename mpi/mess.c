#include "mpi.h"
 #include <stdio.h>
 #include <string.h>

int main(int argc, char *argv[])
 {
        int my_rank,p,source,dest,tag=0;
        char msg[100];
        MPI_Status status;

        MPI_Init(&argc,&argv);
        MPI_Comm_size(MPI_COMM_WORLD,&p);
        MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);

        if(my_rank!=0)
        {
                sprintf(msg,"Greeting from Process %d\n",my_rank);
                dest=0;
                MPI_Send(msg,strlen(msg)+1,MPI_CHAR,dest,tag,MPI_COMM_WORLD);
        }
        else
        {
                for(source=1;source<p;source++)
                {
                        MPI_Recv(msg,100,MPI_CHAR,source,tag,MPI_COMM_WORLD,&status);
                        printf("%s\n",msg);
                }
        }
        MPI_Finalize();
   return 0;
  }
