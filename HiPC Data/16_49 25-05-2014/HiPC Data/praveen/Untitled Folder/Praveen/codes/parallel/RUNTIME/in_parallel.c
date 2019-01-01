#include<omp.h>
#include<stdio.h>
int main(){
	printf("IN PARALLEL: %d\n",omp_in_parallel());
	#pragma omp parallel
	{
		printf("IN PARALLEL: %d\n",omp_in_parallel());
	}
	return 0;
}	
