#include<stdio.h>
typedef struct stud
{
	int rollno;
	char name[10];
	char branch[10];
	int marks;
}stud;
int main()
{
	stud s[20];
	int i;
	for(i=0;i<20;i++)
	{
		printf("\n ROllno of stud:%d",i);
		scanf("\n%d ",&s[i].rollno);
		printf("\n Name of stud:%d",i);
		scanf("\n%c ",&s[i].name);
		printf("\n Branch of stud:%d",i);
		scanf("\n%c ",&s[i].branch);
		printf("\n marks of stud:%d",i);
		scanf("\n%d ",&s[i].marks);
	}

	for(i=0;i<20;i++)
	{
		printf("\n ROllno of stud:%d::%d",i,s[i].rollno);
		
		printf("\n Name of stud:%d::%c",i,s[i].name);
		
		printf("\n Branch of stud:%d::%c",i,s[i].branch);
		
		printf("\n marks of stud:%d::%d",i,s[i].marks);
		
	}
	
}	