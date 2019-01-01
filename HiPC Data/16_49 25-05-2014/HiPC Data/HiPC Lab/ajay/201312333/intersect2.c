#include<stdio.h>
#define l1.p1 s1
#define l1.p2 s2
#define l2.p1 s3
#define l2.p2 s4
typedef struct point
{
	int x,y;
}point;
typedef struct line
{
	point p1,p2;
}line;
lscommon_point(line l1,line l2)
{
	int m1,m2;
	m1=(s2.y-s1.y)/(s2.x-s1.x);
	m2=(s4.y-s3.y)/(s4.x-s3.x);
	
/*	if(m1*m2==0)
		printf("\n lines are not intersecting");

	else
		printf("\n lines are intersecting");
*/
}
int main()
{
	line l1,l2;
	printf("\n enter values for line 1");
	scanf("%d %d %d %d",&s1.x,&s1.y,&s2.x,&s2.y);
	printf("\n enter values for line 1");
	scanf("%d %d %d %d",&s3.x,&s3.y,&s4.x,&s4.y);
	lscommon_point(l1,l2);
	
}

