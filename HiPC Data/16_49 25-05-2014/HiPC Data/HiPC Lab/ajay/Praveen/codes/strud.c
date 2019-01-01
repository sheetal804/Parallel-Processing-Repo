#include<stdio.h>
#define SIZE 2
typedef struct student{
	int roll;
	char name[20],branch[10];
	float marks;
	}student;
void read(student *s){
	int i=0;
	for(i;i<SIZE;i++){
		printf("Name : ");
		scanf("%s",s[i].name);
		printf("Roll : ");
		scanf("%d",&s[i].roll);
		printf("Branch : ");
		scanf("%s",s[i].branch);
		printf("Marks : ");
		scanf("%.2f",&s[i].marks);
	}
}
void display(student s){
	printf("%d   %s   %s   %f\n",s.roll,s.name,s.branch,s.marks);
}
void search(student *s, char * str){
	int i=0;
	for(i=0;i<SIZE;i++){
		if(strcmp(s[i].branch,str)==0)
			display(s[i]);
	}
}
int main(){
	student s[SIZE];
	int i=0;
	char branch[20];
	read(s);
	printf("Enter the branch :");
	scanf("%s",branch);
	search(s,branch);
	return 0;
}
