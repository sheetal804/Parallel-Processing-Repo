#include<stdio.h>
void mystrcpy(char str1[], char str2[]){
	int i=0;
	while(str2[i]!='\0'){
		str1[i]=str2[i];
		i++;
	}
	str1[i+1]='\0';
}
void mystrcat(char str1[],char str2[]){
	int i=0,j=0;
	while(str1[i]!='\0')
		i++;
	while(str2[j]!='\0'){
		str1[i]=str2[j];
		i++;
		j++;
	}
	str1[i]='\0';
}
int main(){
	char s1[40];
	char s2[40];
	printf("Enter a string :");
	scanf("%[^\n]",s1);
	mystrcpy(s2,s1);
	printf("\nThe copied string is : %s \n",s2);
	printf("\nEnter the another string : ");
	scanf("%s",s2);
	mystrcat(s1,s2);
	printf("\nThe catenated string is : %s \n",s1);
	return 0;
}
