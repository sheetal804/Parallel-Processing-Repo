#include<stdio.h>
int main()
{
	int a[10],temp,i,j;
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<10;i++)
		for(j=i+1;j<10;j++)
			if(a[j]>a[i])
				{
					temp=a[j];
					a[j]=a[i];
					a[i]=temp;
				}
	for(i=0;i<10;i++)
		printf("%d",a[i]);
}
