#include<omp.h>
#include<stdio.h>
int main(){
	int id,i;
	#pragma omp parallel for schedule(static) shared(id)
		for(i=0;i<10;i++){
			id=omp_get_thread_num();
			printf("THREAD :%d\ti =%d\n",id,i);
	return 0;
}
