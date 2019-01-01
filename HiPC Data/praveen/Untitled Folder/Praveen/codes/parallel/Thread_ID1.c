#include<omp.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	#pragma omp parallel 
	  {
		int num=omp_get_thread_num();
		printf("hello. my thread id is :%d\n",num);
	  }
	printf("Praveen kumar\n");
	return 0;
}
