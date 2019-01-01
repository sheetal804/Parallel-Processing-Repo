#include<stdio.h>
#include<stdlib.h>
void and_operator(int **a, int **mat,int n){
	int i,j,k,sum=0,temp=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				temp=a[i][k]*mat[k][j];
				sum=(sum>=temp?sum:temp);
			}
			a[i][j]=sum;
			sum=0;
		}
	}				
}
void or_operator(int **b,int **a,int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=b[i][j]>=a[i][j]?b[i][j]:a[i][j];
		}
	}
}

void transitive(int **b,int **mat,int n){
	int i,j;
	int **a=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++){
		a[i]=(int *)malloc(sizeof(int)*n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			a[i][j]=mat[i][j];
			b[i][j]=a[i][j];
		}
	}
	for(i=1;i<n;i++){
		and_operator(a,mat,n);
		or_operator(b,a,n);
	}
}
int main(){
	int n,i,j;
	printf("\nEnter the value of n :");
	scanf("%d",&n);
	int **mat=(int **)malloc(sizeof(int *)*n);
	int **b=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++){
		b[i]=(int *)malloc(sizeof(int)*n);
		mat[i]=(int *)malloc(sizeof(int)*n);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Matrix is :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	transitive(b,mat,n);
	printf("Result is :\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=n-1;i>=0;i--){
		free(mat[i]);
		free(b[i]);
	}
	return 0;
}
	
