#include<stdio.h>
int mystrlen(char str[]){
	int count=0,i;
	for(i=0;str[i]!='\0';i++)
		count++;
	return count;
}
int main(){
	char str[20];
	printf("Enter a string :");
	scanf("%[^\n]",str);
	int length=mystrlen(str);
	printf("the length of string is : %d\n",length);
	return 0;
}
