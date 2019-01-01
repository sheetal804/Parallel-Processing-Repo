#include<stdio.h>
#include<omp.h>
int main()
{
	int  a,x,n=10,i;
	#pragma omp parallel for private(i) firstprivate(n)
	for(i=0;i<n;i++)
	{
		a=i+1;
		n=n-1;	
		printf("n= %d\n",n);
	printf("Thread number %d\t has  value of a =%d\t for i=%d\n",omp_get_thread_num(),a,i);

	}
	printf("a=%d\n",a);
return 0;
}