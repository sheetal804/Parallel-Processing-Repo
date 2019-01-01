#include<omp.h>
#include<stdio.h>
int main(){
	int a,i,n=10;
	#pragma omp parallel for private(i) lastprivate(a)
		for(i=0;i<n;i++){
			a=i+1;
			printf("THREAD :%d\ti :%d\ta :%d\n",omp_get_thread_num(),i,a);
		}
	printf("a :%d\n",a);
	return 0;
}
