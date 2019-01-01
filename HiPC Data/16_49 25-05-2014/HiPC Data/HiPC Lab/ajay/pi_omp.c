#include<stdio.h>
#include<omp.h>
long num_steps=100000;
double steps;
#define num_threads 4
main()
{
	int i;
	double x,pi=0.0,sum[num_threads];
	steps=1.0/(double)num_steps;
	omp_set_num_threads(num_threads);
	#pragma omp parallel 
	{
		double x;
		int id;
		id=omp_get_thread_num();
			sum[id]=0.0;
		#pragma omp for schedule(static)
		for(i=id;i<num_steps;i=i+num_threads)
		{
			x=(i+0.5)*steps;
			sum[id]+=4.0/(1.0+x*x);
		}
	}
	for(i=0,pi=0;i<num_threads;i++)
	pi+=sum[i]*steps;
	printf("pi:%lf",pi);
}			
