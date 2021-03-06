
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int or_operation(int a, int b){
	return a>=b?a:b;
}	
void warshall(int **mat,int n){
	int i,j,k,temp,temp1;
	int ***r=(int ***)malloc(sizeof(int **)*n);

	// copy matrix into r[0]

	r[0]=(int **)malloc(sizeof(int *)*n);
	for(i=0;i<n;i++){
		r[0][i]=(int *)malloc(sizeof(int)*n);
		for(j=0;j<n;j++){
			r[0][i][j]=mat[i][j];
		}
	}
	
	//Allocate memory for all rhe r matrix

	for(k=1;k<n;k++){
		r[k]=(int **)malloc(sizeof(int *)*n);
		for(i=0;i<n;i++)
			r[k][i]=(int *)malloc(sizeof(int)*n);
	}

	// CAlculation 

	for(k=1;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++)
				r[k][i][j] = or_operation( r[k-1][i][j] , (r[k-1][i][k]*r[k-1][k][j]) );
		}
	}

	// result
		
	printf("Result \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%d ",r[n-1][i][j]);
		printf("\n");
	}
	
	//Free Memory

	for(i=n-1;i>=0;i--){
		for(j=n-1;j>0;j--){
			free(r[i][j]);
		}
		free(r[i]);
	}
	free(r);
	printf("memory unallocated.\n");
}
int main(){
	int v,i,j;
	float p,temp;
	printf("Enter the number of vertices :");
	scanf("%d",&v);
	printf("Enter the inclusion probability :");
	scanf("%f",&p);
	int **mat=malloc(sizeof(int *)*v);
	for(i=0;i<v;i++)
		mat[i]=(int *)malloc(sizeof(int)*v);
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			//temp=(float)rand()/RAND_MAX;
			//if(temp < p)
			//	mat[i][j]=1;
			scanf("%d",&mat[i][j]);
		}
	}
	FILE *fp=fopen("matlog.txt","w");
	fprintf(fp,"%d\n",v);
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			printf("%d ",mat[i][j]);
			fprintf(fp,"%d ",mat[i][j]);
		}
		printf("\n");
		fprintf(fp,"\n");
	}
	warshall(mat,v);
	fclose(fp);
	for(i=v-1;i>=0;i--)
		free(mat[i]);
	free(mat);
	return 0;
}
	
