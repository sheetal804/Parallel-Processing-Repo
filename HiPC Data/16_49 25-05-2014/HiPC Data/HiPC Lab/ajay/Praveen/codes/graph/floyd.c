int min(int a, int b){
	printf("a=%d\tb=%d\n",a,b);
	return a<b?a:b;
}
void floyd(int **mat,int v){
	FILE *f=fopen("floyd.txt","w");
	int i,j,k;
	for(k=0;k<v;k++){
		for(i=0;i<v;i++){
			for(j=0;j<v;j++){
				mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
			}
		}
	}
	printf("\n\nfloyd result\n\n");
	for(i=0;i<v;i++){
		for(j=0;j<v;j++){
			printf("%d ",mat[i][j]);
			fprintf(f,"%d ",mat[i][j]);
		}
		printf("\n");
		fprintf(f,"\n");
	}
	fclose(f);
}
