#include<stdio.h>
#include<string.h>
int IsPalindrome(char str[]){
	int i,j,flag=0;
	j=strlen(str)-1;
	for(i=0,j;i<=j;i++,j--){
		if(str[i]!=str[j]){
			flag=1;
			break;
		}
	}
	return !(flag);
}
int main(){
	char str[20];
	printf("Enter a string :");
	scanf("%s",str);
	if(IsPalindrome(str))
		printf("string is pallindrome\n");
	else
		printf("string is not pallindrome\n");
	return 0;
}
