#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
	int i;
	int n=8;
	#pragma omp parallel shared(n) private(i)
	{
		int id=omp_get_thread_num();
		#pragma omp for schedule(static,2)
			for(i=0;i<n;i++)
			printf("ID :%d\ti=%d\n",id,i);
	}
	return 0;
	}
