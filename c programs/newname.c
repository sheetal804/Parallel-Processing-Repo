#include<stdio.h>
int main()
{
	int ch;
	char *firstptr,*secondptr,*thirdptr;
	printf("Enter your name\n");
	
		
		scanf("%s",firstptr);
		scanf("%s",secondptr);
	
		scanf("%s",thirdptr);
		
	printf("enter your choice 1: first_name\t 2.middle_name\t 3: last_name\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("%s",firstptr);
			break;
			case 2:
			printf("%s",secondptr);
			break;
			case 3:
			printf("%s",thirdptr);
			break;
			default :
			printf("wrong choice\n");
		}
	return 0;
}		

