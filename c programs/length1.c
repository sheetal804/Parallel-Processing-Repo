#include<stdio.h>
int mystrlen(const char *c)
{
	int i=0;
	while(c[i]!='\0')
	{
		i++;
		c[0]='A';
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
