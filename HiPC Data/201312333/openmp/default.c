#include<stdio.h>
#include<omp.h>
int main()
{ int i,a[10],b[10],n;
	float result=0.0;
	scanf("%d",&n);
	#pragma omp paralllel for default(shared) private(i) scheduled(static,chunk) reduction(+:result)
	for(i=0;i<n;i++)
	result=result+(a[i]*b[i]);
	for(i=0;i<n;i++)
	printf("Final result=%f\ta[%d]=%d\tb[%d]=%d\ttid=%d\n",result,i,a[i],i,b[i],omp_get_thread_num());
}	
