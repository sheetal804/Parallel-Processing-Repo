#include<stdio.h>
#include<omp.h>
int main()
{
	int x;
	x=0;
		#pragma omp parallel private(x)
		{
			#pragma omp critical 
			x=x+1;
			printf("X=%d\t ID=%d\n",x,omp_get_thread_num());
			}
			
	}		
