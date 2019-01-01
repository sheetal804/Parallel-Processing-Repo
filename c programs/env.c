#include<stdio.h>
int main(int argc,char *argv[],char **envp)
{
	printf("\n ENVIRONMENTAL VARIABLE\n");
	while(*envp!=NULL)
	printf("%s\n",*(envp++));
return 0;
}
