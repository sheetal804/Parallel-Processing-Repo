#include<stdio.h>
#include<time.h>
#define max 100
int main()
{
	int a[max][max],b[max][max],c[max][max];
	int m,n,p,q,i,j,k,sum=0;
	double t_time,random;
        clock_t begin,end;
	//FILE *fp=fopen("mat_mul.txt","w");
	scanf("%d",&m);
	
	scanf("%d",&n);
	scanf("%d",&q);
	scanf("%d",&p);

	if(m==p)
	{
		printf("\n Matrix multiplication possible:");
	
	
		printf("Enter first matrix:");
		for(i=0;i<m;i++)
		{	
			for(j=0;j<n;j++)
			{	
				a[i][j]=rand()%10;
				//fprintf(fp,"%lf",a[i][j]);
				//scanf("%d",&a[][]
			}

			//fprintf(fp,"\n");
		}
		printf("Enter second matrix:");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{	
				b[i][j]=(rand()%10);
				//fprintf(fp,"%lf",b[i][j]);
			}

			//fprintf(fp,"\n");
		}
		printf("first matrix:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{		
				printf("%d",a[i][j]);
				//fprintf(fp,"%lf",
			}
			printf("\n");
		}
		printf("second matrix:\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{		
				printf("%d",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				c[i][j]=0;
			}
		}

		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				sum=0;
				for(k=0;k<n;k++)
					sum=sum+a[i][k]*b[k][j];
					c[i][j]=sum;	
			}
		}
		printf("\nmatrix multiplication is two matrix is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				printf("%d\t",c[i][j]);
				//fprintf(fp,"%d\t",c[i][j]);
			}
			//fprintf(fp,"\n");
			printf("\n");
			
		}
	}
	end=clock();
	t_time=(double)(end-begin)/CLOCKS_PER_SEC;
	printf("time taken:%lf sec\n",t_time);
		//fclose(fp);
		//else
		//("\n matrix multiplication is not possible:");

}
	
