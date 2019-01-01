#include<stdio.h>
#include<omp.h>
int main()
{
	#pragma omp parallel
	{
		#pragma omp single
		{
			
			#pragma omp task
			printf("hello\n");
		
			#pragma omp task
			printf("World\n");
			#pragma omp taskwait
			printf("THANK YOU\n");
		}
	}
	return 0;
}
