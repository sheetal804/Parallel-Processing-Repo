#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int t,i,l,flag;
	char str[11];
	scanf("%d",&t);
	while(t--){
		i=0;
		flag=0;
		scanf("%s",str);
		l=strlen(str);
		if(l!=10){
			flag=1;
		}
		else{
			for(i=0;i<l;i++){
			    if(i < 5 || i==9){
				if(isupper(str[i])==0){
					flag=1;
					break;
				}
			    }
			    else{
				if(isdigit(str[i])==0){
					flag=1;
					break;
				}
			     }
			}
		}
		if(flag==1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
