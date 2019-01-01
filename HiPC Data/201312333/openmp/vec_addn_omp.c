#include<stdio.h>
#include<malloc.h>
#include<time.h>
#include<omp.h>
int main()
{
	int i,n,tid;
	double t_time,random,t1,t2;
        clock_t begin,end;
       
	printf("\n Enter the dimension of vector:");
	scanf("%d",&n);
	int *a=(int*)malloc(n*sizeof(int));
	int *b=(int*)malloc(n*sizeof(int));
	int *c=(int*)malloc(n*sizeof(int));
	
 
 
 	printf("\n read vector A:\n");
 


	for(i=0;i<n;i++)
		a[i]=rand()%2;

	
	for(i=0;i<n;i++)
		b[i]=rand()%2;
	
	
	begin=clock();
	//t1=omp_get_wtime();
	
			
	                for(i=0;i<n;i++)
			{
				
				
			      c[i]=a[i]+b[i];
			}
	end=clock();
	//t2=omp_get_wtime();
	//printf("%lf",t2-t1);
/*	for(i=0;i<n;i++)
	{
		fprintf(fp,"\n%da[%d]",i,a[i]);
		fprintf(fp,"\t%db[%d]",i,b[i]);
		fprintf(fp,"\t%dc[%d]",i,c[i]);
		
		
	}
  */ 

	
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("time taken:%lf sec\n",t_time);
	//fprintf(fp,"\ntime:%lf",t_time);
	//fclose(fp);
	return 0;
}
