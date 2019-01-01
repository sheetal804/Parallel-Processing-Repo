#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	#pragma omp parallel
	{
		#pragma omp single
		{
			#pragma omp task
				{printf("HELLO %d\n",omp_get_thread_num());}
			#pragma omp task
				{ printf("WORLD %d\n",omp_get_thread_num());}
			#pragma omp taskwait
				{ printf("THANKU %d\n",omp_get_thread_num());}
		}
	}
	printf("\n");
	return 0;
}
