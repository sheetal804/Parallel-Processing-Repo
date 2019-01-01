#include<stdio.h>
#include<omp.h>
int main()
{
	int i,a,n;
	scanf("%d",&n);
	
	#pragma omp parallel for private(i) firstprivate(a)
	for(i=0;i<n;i++)
	{
		a=i+1;
		printf("Thread %d has a value of a=%d for i= %d\n",omp_get_thread_num(),a,i);
	}
	printf("a=%d",a);
}	
		
