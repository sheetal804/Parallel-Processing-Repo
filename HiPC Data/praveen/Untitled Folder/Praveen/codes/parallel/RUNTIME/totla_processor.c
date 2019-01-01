#include<omp.h>
#include<stdio.h>
int main(){
	printf("TOTAL PROCESSOR: %d\n",omp_get_num_procs());
	return 0;
}	
