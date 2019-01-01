#include<stdio.h>
int mystrlen(char c[])
{
	int i=0;
	while(c[i]!='\0')
	{
		i++;
	}
return i;
}

void mystrcpy(char a[],char c[],int c1,int i)
{
	while(c[i]!='\0')
	{
		
	a[i]=c[i];
	i++;
	}
}
	void mystrcat(char ch1[],char ch2[])
	{
		int c1,c2;
			c1=mystrlen(ch1);
			c2=mystrlen(ch2);
		char c[c1+c2];
		mystrcpy(c,ch1,c1,0);
		mystrcpy(c,ch2,c2,c1);
		c[c1+c2]='\0';
		printf("%s",c);
	}
	int main()
	{
		char s[30],s1[40];
		printf("Enter the first string\n");
		printf("%s",s);
		printf("Enter the second string\n");
		printf("%s",s1);
		mystrcat(s,s1);
		return 0;
	}
		
