#include<stdio.h>
int mystrlen(const char *s){
	int i=0;
	while(s[i]!='\0')
		i++;
	//s[i]='s';
	return i;
}
int main(){
	char s1[20];
	scanf("%s",s1);
	int l=mystrlen(s1);
	printf("%d\t%s\n",l,s1);
	return 0;
}
