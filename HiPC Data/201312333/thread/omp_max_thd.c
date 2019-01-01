#include<stdio.h>
#include<omp.h>
int main()
{
	printf("\n num of thd:%d",omp_set_dynamic(1));
	
	#pragma omp parallel
	{
		//printf("\n num of thd:%d",omp_set_dynamic(1));
		//printf("\n num of thd:%d",omp_in_parallel());
       }
	}
