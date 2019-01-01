#include<stdio.h>
#include<omp.h>
int main()
{
	int i,n=10,chunk=2;
	float a[n],b[n],result;
	result=0.0;
	for(i=0;i<n;i++)
	{
		a[i]=i*1.0;
		b[i]=i*2.0;
	}
	#pragma omp parallel for default(shared) schedule(static,chunk) reduction(+:result)
	for(i=0;i<n;i++)
	{
		result=result+(a[i]*b[i]);
		printf("iteration number %d\n",i);
		printf("result = %f\t tid=%d\t",result,omp_get_thread_num());
		printf(" a[i] = %f\t",a[i]);
		printf("b[i]= %f\n\n",b[i]);
	}
		printf("\nFinal result=%f\n",result);
	
	return 0;
}