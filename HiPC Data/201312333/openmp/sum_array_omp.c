#include<stdio.h>
#include<omp.h>
#include<malloc.h>
#include<time.h>
#include<sys/time.h>
int main()
{
	int n,i,sum=0;
	struct timeval Timevalue_start;
	struct timezone Timezone_start;
	struct timeval Timevalue_Final;
	struct timezone Timezone_Final;
	long time_start,time_end;
	double time_overhead;
	//double t_time,random;
       // clock_t begin,end;
        
	int *a=(int*)malloc(n*sizeof(int));
	int *b=(int*)malloc(n*sizeof(int));
	int *c=(int*)malloc(n*sizeof(int));
	printf("\n Enter the dimension:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		a[i]=rand()%2;
	for(i=0;i<n;i++)
		printf("%d",a[i]);	
		//begin=clock();
	gettimeofday(&Timevalue_start,&Timezone_start);
	
	#pragma omp parallel for 	
	for(i=0;i<n;i++)
	{
		#pragma omp critical 
		sum+=a[i];
		printf("\n Sum:%d id:%d",sum,omp_get_thread_num());

		
	}	
	gettimeofday(&Timevalue_Final,&Timezone_Final);
	time_end=Timevalue_Final.tv_sec*1000000+ Timevalue_Final.tv_usec;
	time_start=Timevalue_start.tv_sec*1000000+ Timevalue_start.tv_usec;
	time_overhead=(time_end-time_start)/1000000;
	printf("time overhead:%lf",time_overhead);
	printf("\n Sum:%d ",sum);
	return 0;
}	
		
