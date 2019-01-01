#include<stdio.h>
int mystrlen(const char *s)
{
	int i=0,c=0;
	while(s[i]!='\0')
		c++;
		
	return c;
}
int mystrlen_2(char *s)
{
	int i=0,c=0;
	while(s[i]!='\0')
            {   i++; 
		c++;
          }
		s[0]='c';
		
	return c;
}

int main()
{
	char s[]="HELLO";
	int a,b;
	//a=mystrlen(s);
	//printf("a=%d",a);
	b=mystrlen_2(s);
	printf("b=%d",b);
        printf("%s\n",s);

}
	
