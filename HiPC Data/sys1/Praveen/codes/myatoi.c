#include<stdio.h>
#define max 20
int myatoi(char str[]){
	int i=0;
	int value=0;
	while(str[i]!='\0'){
		value=10*value+(str[i]-'0');
		i++;
	}
	return value;
}
int main(){
	char str[max];
	printf("enter the string :");
	scanf("%[^\n]",str);
	int value=myatoi(str);
	printf("The interger value is :%d\n",value);
	return 0;
}
