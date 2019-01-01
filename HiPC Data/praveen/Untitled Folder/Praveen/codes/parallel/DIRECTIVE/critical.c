#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int x=0;
	#pragma omp parallel shared(x)
	{
		#pragma omp critical
		{	x=x+1;
			printf("THREAD :%d\tx=%d\n",omp_get_thread_num(),x);
		}	
	}
	return 0;
}
