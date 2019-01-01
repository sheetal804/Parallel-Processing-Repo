#include<stdio.h>
int b[10];
int* myatoi(char a[])
{
	//int b[10];
	int i;
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=x*a[i]-48;
	}
	return b;
}
int main()
{
	char a[5];
	int *p,i,c=0;
	for(i=0;a[i]!='\0';i++)
	{
		scanf("%c",&a[i]);
                 c++;
	}
	p=myatoi(a);
        for(i=0;i<=c;i++)
	printf("\n%d",*(p+i));
}
