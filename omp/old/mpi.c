#include<omp.h>
#include<stdio.h>
#include<string.h>

int main(int argc,char *argv[])
        {
        int i,id,my_rank,totalsum=0,p,n,sum[20],ar[20];
        MPI_Status status;
        int tag=0,tag1=0,tag2=0;
        MPI_Init(&argc,&argv);
        MPI_Comm_size(MPI_COMM_WORLD,&p);
        MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);
        totalsum=0;
        for(i=0;i<p;i++)
        sum[i]=0;


        if(my_rank==0)
        {
        printf("Enter the no of Elements\n");
        scanf("%d",&n);

        for(i=0;i<n;i++)
                scanf("%d",&ar[i]);

        for(id=1;id<p;id++)
                MPI_Send(&n,1,MPI_INT,id,tag,MPI_COMM_WORLD);
        for(id=1;id<p;id++)
                for(i=0;i<n;i++)
                        MPI_Send(&ar[i],1,MPI_INT,id,tag,MPI_COMM_WORLD);
        }

  else
        {
                MPI_Recv(&n,1,MPI_INT,0,tag,MPI_COMM_WORLD,&status);
                for(i=0;i<n;i++)
                        MPI_Recv(&ar[i],1,MPI_INT,0,tag1,MPI_COMM_WORLD,&status);
        }

        if((my_rank!=0)&&(my_rank!=p-1))
        {
                for(i=my_rank*(n/p);i<(my_rank+1)*(n/p);i++)
                        sum[my_rank]+=ar[i];

                MPI_Send(&sum[my_rank],1,MPI_INT,0,tag2,MPI_COMM_WORLD);
        }
        else
        {
                if(my_rank==p-1)
                {
                        for(i=my_rank*(n/p);i<n;i++)
                                sum[my_rank]+=ar[i];

                        MPI_Send(&sum[my_rank],1,MPI_INT,0,tag2,MPI_COMM_WORLD);


                }
                else
                {

                        for(id=1;id<p;id++)
                                MPI_Recv(&sum[id],1,MPI_INT,id,tag2,MPI_COMM_WORLD,&status);
            for(i=0;i<(n/p);i++)
                                sum[my_rank]+=ar[i];

                        for(i=0;i<p;i++)
                                totalsum+=sum[i];
                                printf("The sum of Elements is %d\n",totalsum);
                }
        }
MPI_Finalize();
return 0;
}
