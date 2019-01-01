#include<stdio.h>
#include<omp.h>
#include<stdlib.h>
void random_num(int *a,int n){
	int i=0;
	for(i=0;i<n;i++)
		a[i]=(int)rand()%9;
}
void display_array(int *a, int n){
	int i=0;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
int main(){
	int n,i;
	int *a;
	scanf("%d",&n);
	a=(int *)malloc(sizeof(int)*n);
	random_num(a,n);
	display_array(a,n);
	int sum=0;
	#pragma omp parallel for reduction(+:sum) shared (n) private(i)
	for(i=0;i<n;i++){
			sum+=a[i];
		}
	printf("Sum =%d\n",sum);
	free(a);
	return 0;
}
