#include<omp.h>
#include<stdio.h>
int a,b,i,tid;
float x;
#pragma omp threadprivate(a,x)
int main(){
	/*Explicitlt turn off dynamic threads */
	omp_set_dynamic(0);
	printf("1st Parallel Region\n");
	#pragma omp parallel private(b,tid)
	{
	 	tid=omp_get_thread_num();
		a=tid;
		b=tid;
		x=1.1*tid+1.0;
		printf("THREAD :%d\ta :%d\tb :%d \tx :%f\n",tid,a,b,x);
	}
	printf("*******************************\n");
	printf("master thread doing serial work\n");
	printf("*******************************\n");
	printf("2nd Parallel Region\n");
	#pragma omp parallel private(tid)
	{
		tid=omp_get_thread_num(); 
		printf("THREAD :%d\ta :%d\tb :%d\tx :%f\n",tid,a,b,x);
	}
	return 0;
}
