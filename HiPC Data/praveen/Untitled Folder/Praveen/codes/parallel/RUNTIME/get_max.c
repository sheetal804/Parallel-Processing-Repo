#include<omp.h>
#include<stdio.h>
int main(){
	omp_set_num_threads(8);
	printf("MAX THREADS: %d\nNUM THREAD: %d\n\n\n",omp_get_max_threads(),omp_get_num_threads());
	#pragma omp parallel
	{
		printf("MAX THREADS: %d\nNUM THREADs: %d\n",omp_get_max_threads(),omp_get_num_threads());	
	}
	return 0;
}	
