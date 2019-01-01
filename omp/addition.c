#include<stdio.h>
#include<omp.h>
#include<stdlib.h>
int main()
{
	int i,n;
	float s=0.0;
	printf("Enter the limit of the array\n");
	scanf("%d",&n);
	float a[n];
	for(i=0;i<n;i++)
	a[i]=(float)rand()/RAND_MAX;
	for(i=0;i<n;i++)
	printf("%f\t",a[i]);
	#pragma omp parallel shared(a)
	{
		int id=omp_get_thread_num();
		
		#pragma omp for
		for(i=0;i<n;i++)
		{
			printf("\ntid=%d\n",id);

			s=s+a[i];
			printf("%f\n",s);
		}
	}
	printf("sum=%f\n",s);
return 0;
}
