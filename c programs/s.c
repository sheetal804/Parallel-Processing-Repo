#include<stdio.h>
int n=5,i;
typedef struct
{
	int roll,marks;
	char name[20],branch[20];
}student;

	void display(student s[],int i)
	{
		printf("Roll number:%d\n",s[i].roll);
		printf("Name:%s\n",s[i].name);
		printf("Marks:%d\n",s[i].marks);
		printf("\n\n");
	}

	int main()
	{
		
		char bre[20];
		student s[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",s[i].roll);
			scanf("%s",s[i].name);
			scanf("%s",s[i].branch);
			scanf("%d",s[i].marks);
		}
	printf("ENTER BRANCH WHOSE STUDENTS DATA YOU WANT TO SEE\n");
		scanf("%s",bre);
		for(i=0;i<n;i++)
		{
			if(!strcmp(s[i].branch,bre))
				diplay(s,i);
		}
	return 0;
	}
			
