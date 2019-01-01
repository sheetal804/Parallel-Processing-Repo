#include<stdio.h>
#include<omp.h>
int funcA(int a, int b)
{
	printf("In funcA: this section is executed by thread %d addition:%d\n",omp_get_thread_num(),a+b);
}	
int funcB(int a, int b)
{
	printf("In funcB: this section is executed by thread %d\nmultiply:%d",omp_get_thread_num(),a*b);
}	
void funcC()
{
	printf("In funcB: this section is executed by thread %d\n",omp_get_thread_num());
}	
void funcD()
{
	printf("In funcB: this section is executed by thread %d\n",omp_get_thread_num());
}	
void funcE()
{
	printf("In funcB: this section is executed by thread %d\n",omp_get_thread_num());
}	
int main()
{

	#pragma omp parallel
	{
		#pragma omp sections
		{
			#pragma omp section
			(int)funcA(2,5);
			
			#pragma omp section
			(int)funcB(2,5);
			
			
		}
	}		
}	
