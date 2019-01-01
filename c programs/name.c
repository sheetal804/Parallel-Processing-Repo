#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	char firstptr[20],secondptr[20],thirdptr[20];
	printf("Enter your name\n");
	
		
		getc(firstptr);
		
		getc(secondptr);
	
		getc(thirdptr);
	
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

