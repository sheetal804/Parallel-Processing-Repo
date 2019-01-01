#include<omp.h>
#include<stdio.h>
#include<stdlib.h>
void random_num(int **a,int n){
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=(int)rand()%9;
}
void display_array(int **a, int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		   printf("%d ",a[i][j]);
		printf("\n");
	}
}
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	int **a=(int **)malloc(sizeof(int *)*n);
	int **b=(int **)malloc(sizeof(int *)*n);
	int **c=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++){
		a[i]=(int *)malloc(sizeof(int)*n);
		b[i]=(int *)malloc(sizeof(int)*n);
		c[i]=(int *)malloc(sizeof(int)*n);
	}
	random_num(a,n);
	random_num(b,n);
	display_array(a,n);
	printf("\n\n");
	display_array(b,n);
	omp_set_num_threads(n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;i++){
				c[i][j]=a[i][k]+b[k][j];
			}
		}
	}
	display_array(c,n);
	
	
	for(i=n-1;i>=0;i--){
		free(a[i]);
		free(b[i]);
		free(c[i]);
	}
	free(a);
	free(b);
	free(c);
	return 0;
}
