#include<omp.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	#pragma omp parallel 
	  {
		printf("hello world\n",num);
	  }
	printf("Praveen kumar\n");
	return 0;
}
