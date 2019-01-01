#include<stdio.h>
#include<omp.h>
int main()
{
	double x;
	x=omp_get_wtime();
	printf("initial time %lf\n",x);
	#pragma omp parallel
	{
		x=omp_get_wtime();
		printf(" time %lf\n",x);
		 //omp_set_dynamic(0);
		// omp_set_dynamic(1);
		//x=omp_get_dynamic();
		//printf("in parallel region =%d\n",x);
	}
	
		 //x=omp_in_parallel();
		//printf("in serial region  =%d\n",x);
	
	return 0;
}
