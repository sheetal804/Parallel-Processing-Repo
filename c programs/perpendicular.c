#include<stdio.h>
typedef struct 
{
	int x,y,z;
}vector;
int isperpendicular(vector v1,vector v2)
{
	int s;
	s=v1.x*v2.x+v2.y*v2.y+v1.z*v2.z;
	if(s==0)
	return 1;
	else
	return 0;
}
int main()
{
	vector v1,v2;
	printf("enter the position vector\n");
	scanf("%d%d%d",&v1.x,&v1.y,&v1.z);
	printf("Enter second position vector \n");
	scanf("%d%d%d",&v2.x,&v2.y,&v2.z);
	if(isperpendicular(v1,v2))
	printf("PERPENDICULAR VECTORS\n");
	else
	printf("NOT A PERPENDICULAR VECTOR\n");
	return 0;
}
