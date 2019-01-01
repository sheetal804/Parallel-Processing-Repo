#include<stdio.h>
void multiply(float a[][],float b[][],float c[][])
{

	int k,i,j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			s=0;
			for(k=0;k<10;k++)
			{
				s=a[j][k]*b[k][j]+s;
			
			}
			c[i][j]=s;
		}
	}
}
	void diplay(int c[][])
	{
		int i,j;
		for(i=0;i,10;i++)
		{
			for(j=0;j<10;j++)
			printf("%d\t",c[i][j]);
		}
	}
	int main()
	{
		float a[10][10],b[10][10],c[10][10];
		int i,j,k=1;
		for(i=0;i<10;i++)
		{
			for(j=0;j<10;j++)
			{
				if(k==10)
				k=1;
				a[i][j]=k;
				b[i][j]=k;
				k++;
			}
		}
	multiply(a,b,c);
	display(c);
	return 0;
}
