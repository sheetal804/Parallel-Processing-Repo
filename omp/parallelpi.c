#include<stdio.h>
#include<omp.h>
long num_steps=10000000;
double steps;
#define num_threads 4
main()
{
int i;

double pi,sum[num_threads],step;
step=1.0/(double)num_steps;
omp_set_num_threads(num_threads);

#pragma omp parallel  reduction(+:pi)
{
	double x;
	int id=omp_get_thread_num();
	#pragma omp for
	for(i=id;i<num_steps;i+=num_threads)
	{
		#pragma task
		{
			sum[id]=0.0;
			x=(i-0.5)*step;
			printf("x=%lf\n",x);
			sum[id]+=4.0/(1.0+x*x);
			pi=sum[id];
		}
		printf("tid=%d\t pi =%lf",id,pi);
		getchar();
	}
	
}
	
	printf("PIE %lf",pi);
	return 0;
}
