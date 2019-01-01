#include<omp.h>
#include<stdlib.h>
#include<stdio.h>
int main(){
	int i;
	#pragma omp parallel
	{
		
		#pragma omp single
		{
			printf("SINGLE 1 :THREAD :%d\n",omp_get_thread_num());
			for(i=0;i<5;i++)
				printf("i :%d THREAD :%d\n",i,omp_get_thread_num());
		}
		#pragma omp single
		{
			printf("SINGLE 2 :THREAD :%d\n",omp_get_thread_num());
			for(i=0;i<5;i++)
				printf("i :%d THREAD :%d\n",i,omp_get_thread_num());
		}
		#pragma omp for
		for(i=0;i<5;i++)
				printf("i :%d THREAD :%d\n",i,omp_get_thread_num());
	}
	return 0;
}
