#include<omp.h>
#include<stdio.h>
int main(){
	printf("MAX THREADS LIMIT: %d\n",omp_get_thread_limit());
	return 0;
}	
