#include<omp.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
	#pragma omp parallel
	{
		#pragma omp sections
		{
			#pragma omp section
				printf("SECTION 1 :THREAD :%d\n",omp_get_thread_num());
			#pragma omp section
				printf("SECTION 2 :THREAD :%d\n",omp_get_thread_num());
			#pragma omp section
				printf("SECTION 3 :THREAD :%d\n",omp_get_thread_num());
			#pragma omp section
				printf("SECTION 4 :THREAD :%d\n",omp_get_thread_num());
			#pragma omp section
				printf("SECTION 5 :THREAD :%d\n",omp_get_thread_num());
			#pragma omp section
				printf("SECTION 6 :THREAD :%d\n",omp_get_thread_num());
		}
	
	}
	return 0;
}