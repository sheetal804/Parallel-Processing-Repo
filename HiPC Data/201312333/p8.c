#include<stdio.h>

int mystrlen(char a[])
{
	int count=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("%d",count);
}
int main()
{
	char a[10];
	
	scanf("%s",a);
	mystrlen(a);
}
