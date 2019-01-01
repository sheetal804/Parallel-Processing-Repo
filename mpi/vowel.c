 #include "mpi.h"
 #include <stdio.h>
 #include <string.h>

int main(int argc, char *argv[])
 {	char str[20];
	int j,c,v=0;
        int i,id,my_rank,p,n,totalsum;
	
        MPI_Status status;
        int tag=0,tag1=0,tag2=0,max=0;

        MPI_Init(&argc,&argv);
        MPI_Comm_size(MPI_COMM_WORLD,&p);
	int vowel[p];
        MPI_Comm_rank(MPI_COMM_WORLD,&my_rank);

        //totalsum=0;
        //for(i=0;i<p;i++)
          //      largest[i]=0;

        if(my_rank==0)
        {
		printf("enter a string\n");
		gets(str);
		n=strlen(str);
		printf("length of string %d\n",n);

                for(id=1;id<p;id++)
                        MPI_Send(&n,1,MPI_INT,id,tag,MPI_COMM_WORLD);
                for(id=1;id<p;id++)
		 for(i=0;i<n;i++)
                       MPI_Send(&str[i],1,MPI_CHAR,id,tag1,MPI_COMM_WORLD);
        }
        else
        {	MPI_Recv(&n,1,MPI_INT,0,tag,MPI_COMM_WORLD,&status);
		for(i=0;i<n;i++)
                  MPI_Recv(&str[i],1,MPI_CHAR,0,tag1,MPI_COMM_WORLD,&status);
        }
        if((my_rank!=0) && (my_rank!=p-1))
        {       c=0;
                for(i=my_rank*(n/p);i<(my_rank+1)*(n/p);i++)
                {
                        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
			c++;
                }
                vowel[my_rank]=c;
                MPI_Send(&vowel[my_rank],1,MPI_INT,0,tag2,MPI_COMM_WORLD);
        }
        else
        {     if(my_rank==p-1)
                {       c=0;
                        for(i=my_rank*(n/p);i<n;i++)
                        {
				//printf("%d\t",i);
                              if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
				{
					c++;
					//printf("%c\t %d\t",str[i],c);
				
				}
                        }
			
                 	vowel[my_rank]=c;
             		MPI_Send(&vowel[my_rank],1,MPI_INT,0,tag2,MPI_COMM_WORLD);
                }
                else
                {
			for(id=1;id<p;id++)
                        {
                       	     c=0;
                 	     MPI_Recv(&vowel[id],1,MPI_INT,id,tag2,MPI_COMM_WORLD,&status);                            
			}		
		      for(i=0;i<(n/p);i++)
                      {
			if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
				c++;
                      }
                                vowel[my_rank]=c;
                                
                                for(i=0;i<p;i++)
                                {
                                       v=v+vowel[i];
					printf("No of vowel is of id %d\t is%d\n",i,vowel[i]);

                                }
				printf("total of vowels is %d\n",v);
                        }
                        
               
        }
                MPI_Finalize();
                return 0;
}
