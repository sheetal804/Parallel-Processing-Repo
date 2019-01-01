#include<stdio.h>
#include<omp.h>
int main(int argc, char *argv[])
{
	#pragma omp parallel
	{
		#pragma omp single
		{
			#pragma omp taskwait
			{
				printf("Hello ID%d",omp_get_thread_num());
			}
			#pragma omp task
			{
				printf("world ID%d",omp_get_thread_num());
			}
		}
	}
	printf("\n");
	return 0;
}				
