#include<stdio.h>
#include<math.h>
	int max(int x,int y)
	{
		if(x>y)
		return x;
		else
		return y;
	}	
int main()
{
	int n,n1,i,j,k=0;
	FILE *fp,*fp1;
	fp=fopen("data.txt","r");
	fscanf(fp,"%d",&n);
	//fscanf(fp,"%d",&n1);
	//printf("%d\n",n);
	//printf("%d\n",n1);
	double a[n][n];
	double b[n];
	//double p,q;

	//printf("%d",n);
		printf("MATRIX A :\n");
		for(i=0;i<n;i++)
		{
			
			for(j=0;j<n;j++)
			{
				fscanf(fp,"%lf",&a[i][j]);
				printf("%lf ",a[i][j]);
			
			}
			printf("\n");
		}

		fp=fopen("b.txt","r");
		fscanf(fp,"%d",&n1);
		printf("MATRIX B\n");
		
		for(i=0;i<n1;i++)
		{
			fscanf(fp,"%lf",&b[i]);
			printf("%lf\n",b[i]);
		}

	int y[n],x[n],z[n];
	
	for(i=0;i<n;i++)
	{
		x[i]=y[i]=0;
		
	}
	
	int s;
	k=-1;;
	
	do
	{
		for(i=0;i<n;i++)
		{
			s=0;
			for(j=0;j<n;j++)
			{
				if(j!=i)
				s=s-(a[i][j]*y[j]);	
			}
			x[i]=(b[i]-s)/a[i][i];
		
		}
		for(i=0;i<n;i++)
		{
			x[i]=max(x[i],y[i]);
			z[i]=abs(x[i]-y[i]);
			y[i]=x[i];
		}
		k++;
				
	}while(max(z[k],n)>pow(10,-5));
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\n",x[i],y[i]);
	}
return 0;
}