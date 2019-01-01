#include<stdio.h>
#include<omp.h>
#include<malloc.h>
#include<time.h>
int main()
{
	int n,i,sum=0;
	double t_time,random;
        clock_t begin,end;
        
	int *a=(int*)malloc(n*sizeof(int));
	int *b=(int*)malloc(n*sizeof(int));
	int *c=(int*)malloc(n*sizeof(int));
	printf("\n Enter the dimension:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%5;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);	
		begin=clock();
	#pragma omp parallel for shared(sum,a) private(i)	
	for(i=0;i<n;i++)
	{
		#pragma omp critical
		sum=sum+a[i];
		printf("\n Sum:%d i:%d id:%d",sum,i,omp_get_thread_num());
	}	
	end=clock();
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("time taken:%lf sec\n",t_time);
		
	printf("\n Sum:%d",sum);
	return 0;
}	
		
