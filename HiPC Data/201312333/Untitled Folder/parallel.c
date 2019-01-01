#include<omp.h>
#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	#pragma omp parallel if(x>10) num_threads(4)
	{
		int id=omp_get_thread_num();
		printf("hello(%d)\n",id);
	}
	return 0;
}
