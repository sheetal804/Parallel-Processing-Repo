#include<stdio.h>
int mystrlen(char *c)
{
	int i=0;
	while(c[i]!='\0')
	{
		i++;
	}
return i;
}

int main()
{
	char *s="the thing";
	printf("the length of string is%d\n",mystrlen(s));
	printf("%s",s);
	return 0;
}
