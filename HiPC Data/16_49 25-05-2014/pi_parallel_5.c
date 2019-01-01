#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
#include<sys/time.h>
#define num_steps 500000000
int main(){
	struct timeval TimeValue_start;
	struct timeval TimeValue_final;
	struct timezone TimeZone_start;
	struct timezone TimeZone_final;
	long t_start,t_end;
	double t_time;
	int i;
	double x,pi,sum=0.0;
	int n;
	printf("NUMBER OF THREADS :");
	scanf("%d",&n);
	omp_set_num_threads(n);
	printf("\n\nPARALLEL PROGRAMMING\n\n");
	gettimeofday(&TimeValue_start,&TimeZone_final);
	double step=1.0/(double)num_steps;
	#pragma omp parallel for private(i) reduction(+:sum)
	for(i=1;i<=num_steps;i++)
			{
				x=(i-0.5)*step;
				sum+=4.0/(1.0+x*x);
			}
	pi=sum*step;
	gettimeofday(&TimeValue_final,&TimeZone_final);
	t_end=TimeValue_final.tv_sec*1000000 + TimeValue_final.tv_usec;
	t_start=TimeValue_start.tv_sec*1000000 + TimeValue_start.tv_usec;	
	t_time=(t_end-t_start)/1000000.0;
	printf("value of pi :%.20lf\n",pi);
	printf("Time taken :%lf\n",t_time);
	
	printf("\n\nSERIAL PROGRAMMING\n\n");
	sum=0.0;
	gettimeofday(&TimeValue_start,&TimeZone_final);
	step=1.0/(double)num_steps;
	for(i=1;i<=num_steps;i++)
			{
				x=(i-0.5)*step;
				sum+=4.0/(1.0+x*x);
			}
	pi=sum*step;
	gettimeofday(&TimeValue_final,&TimeZone_final);
	t_end=TimeValue_final.tv_sec*1000000 + TimeValue_final.tv_usec;
	t_start=TimeValue_start.tv_sec*1000000 + TimeValue_start.tv_usec;	
	t_time=(t_end-t_start)/1000000.0;
	printf("value of pi :%.20lf\n",pi);
	printf("Time taken :%lf\n",t_time);
	printf("\n\n");
	return 0;
}
	
	
