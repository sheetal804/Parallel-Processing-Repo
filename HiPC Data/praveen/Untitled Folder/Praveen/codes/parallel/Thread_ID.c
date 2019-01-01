#include<omp.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	#pragma omp parallel 
	  {
		int num=omp_get_thread_num();
		if(num==0)
			printf("i am the master thread. My id is : %d\n",num);
		else
			printf("i am the team thread. My id is :%d\n",num);
	  }
	printf("Praveen kumar\n");
	return 0;
}
