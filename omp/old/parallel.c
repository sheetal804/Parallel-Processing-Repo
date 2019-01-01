#include<stdio.h>
#include<omp.h>
int main()
{ 
	int x=11;
	#pragma omp parallel if(x>10) num_threads(4)
 	{
		int id=omp_get_thread_num();
		printf("hello\t");
		printf("%d\n",id);
	}
	return 0;
}

