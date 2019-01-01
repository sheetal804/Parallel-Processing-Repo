#include<stdio.h>
#include<omp.h>
int main(){
	int i,n,chunk;
	float a[100],b[100],result;
	n=10;	
	chunk=2;
	result=0.0;
	for(i=0;i<n;i++){
		a[i]=i*1.0;
		b[i]=i*2.0;
	}
	#pragma omp parallel for \
	default(shared) private(i) \
	schedule(static,chunk) \
	reduction(+:result)
	for(i=0;i<n;i++){
		result=result+(a[i]*b[i]);
		printf("result :%.2f\t i :%d \tTHREAD :%d\t a :%.2f\tb :%.2f\t\n",result,i,omp_get_thread_num(),a[i],b[i]);
	}
	printf("FINAL RESULT :%.2f\n",result);
	return 0;	
}	
	
