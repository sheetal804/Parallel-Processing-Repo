#include<stdio.h>
typedef struct point
{
	int x,y,z;
}point;
typedef struct linesegment
{
	point p1,p2;
}line;
/*pos_vector (point x)
{
	printf("%di+%dj+%dk",p1.x,p2.x,p3.z);
}*/
isperpendicular(point p1,point p2)
{
	int r;
	r=(p1.x*p2.x)+(p1.y*p2.y)+(p1.z*p2.z);
	if(r==0)
		printf("\n lines are perpendicular:");
	else 
		printf("\n lines are not perpendicular:");
}
int main()
{
	point p1,p2;
	printf("\n enter the positional values for point p1:");
	scanf("%d %d %d",&p1.x,&p1.y,&p1.z);
	printf("\n enter the positional values for point p2:");
	scanf("%d %d %d",&p2.x,&p2.y,&p2.z);
	isperpendicular(p1,p2);
} 
	
	
