#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 20
int mystrcmp(char str1[],char str2[]){
	int i,j;
	int l1=strlen(str1);
	int l2=strlen(str2);
	for(i=0,j=0;i<l1-1 || j<l2-1;i++,j++){
		if(str1[i]!=str2[j])
			return (str1[i]-str2[j]);
		}
	return 0;
}
int main(){
	char s1[max];
	char s2[max];
	printf("Enter two strings:\n");
	scanf("%s",s1);
	scanf("%s",s2);
	int t=mystrcmp(s1,s2);
	if(mystrcmp(s1,s2)==0)
		printf("Both Strings are same.\n");

	else
		printf("Both Strings are different.\n");	
	return 0;
}
