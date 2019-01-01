#include<stdio.h>
#include<omp.h>
int main()
{
	
	
	
	#pragma omp parallel
	{
	double pi;
	double step;
	int num_step=1000;
	int i;
	double sum,x;
	step=1.0/(double)num_step;
		int id=omp_get_thread_num();
	for(i=id;i<id;i++)
	{	
		for(i=1;i<=num_step/4;i++)
		{
		x=(i-0.5)*step;
		sum+=4/(1.0+x*x);
		}
		id++;
	}
	
	
	pi=step*sum;	
	printf("PIE %lf",pi);
	}
return 0;
}
