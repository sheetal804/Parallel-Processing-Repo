#include<stdio.h>
#include<omp.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int k,i,j,n,s;
	FILE *fp;
	
	clock_t begin,end;
	double time_spent;
	printf("Enter the dimension\n");
	scanf("%d",&n);
	float a[n],b[n],c[n];
	begin=clock();
	for(i=0;i<n;i++)
	{
		a[i]=(float)rand()/RAND_MAX;
		b[i]=(float)rand()/RAND_MAX;
		printf("%f\t%f\n",a[i],b[i]);
		
				
		
	}
	begin=clock();
	fp=fopen("multiply.txt","w");
	
	#pragma omp parallel 
	{
		int id=omp_get_thread_num();
	
		#pragma omp for

		for(i=0;i<n;i++)
		{
			printf("tid=%d\n",id);
			c[i]=a[i]+b[i];
		}
	
	}
		for(i=0;i<n;i++)
		{
			printf("%f\n",c[i]);
			fprintf(fp,"%f\n",c[i]);
		}
	
	end=clock();
	time_spent=(double)(end-begin)/CLOCKS_PER_SEC;
	printf(" Time taken=%lf\n",time_spent);	
	return 0;
}
