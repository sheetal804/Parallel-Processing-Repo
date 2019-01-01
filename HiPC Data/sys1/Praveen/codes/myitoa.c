#include<stdio.h>
#include<string.h>
#define max 20
void reverse(char str[]){
	char temp;
	int i=0,j;
	int l=strlen(str)-1;
	for(i=0,j=l;i<=j;i++,j--){
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
}
void myitoa(int value,char str[max]){
	char temp;
	int i=0;
	while(value>0){
		temp=(value%10)+'0';
		value=value/10;
		str[i]=temp;
		i++;
	}
	str[i]='\0';
	reverse(str);
}
int main(){
	int value;
	char str[max];
	printf("enter the value :\n");
	scanf("%d",&value);
	myitoa(value,str);
	printf("the resultant string is :%s\n",str);
	return 0;
}
