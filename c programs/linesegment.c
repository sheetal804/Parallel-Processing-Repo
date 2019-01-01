#include<stdio.h>
typedef struct
{
	int x,y;
}point;
typedef struct 
{
	point p1,p2;
	int m;
}line;
	int inter(line l1,line l2)
	{
		double a,b;
				
			l1.m=(l1.p2.y-l1.p1.y)/(l1.p2.x-l1.p1.x);
			l2.m=(l2.p2.y-l2.p1.y)/(l2.p2.x-l2.p1.x);
			a=(l2.m*l2.p1.x-l1.m*l1.p1.x)+(l1.p1.y-l2.p1.y)/(l2.m-l1.m);
			b=l1.m*(a-l1.p1.x)+l1.p1.y;
			printf("point of intersection %lf\t%lf\n",a,b);
			if(a>=l2.p1.x&&a<=l2.p2.x)
				{
					if(b>=l2.p1.y&&b<=l2.p2.y)
					return 1;
				}
			return 0;
	}
	int main()
	{
		line l1,l2;
		printf("enter the point 1\n");
		scanf("%d%d",&l1.p1.x,&l1.p1.y);
		printf("enter point2 for segment 1\n");
		scanf("%d%d",&l1.p2.x,&l1.p2.y);
		printf("Enter point1 for segment 2\n");
		scanf("%d%d",&l2.p1.x,&l2.p1.y); 
		printf("enter point2 for segment 2\n");
		scanf("%d%d",&l2.p2.x,&l2.p2.y);

		if(inter(l1,l2))
		printf("INTERSECTING\n");
		else
		printf("NOT INTERSECTING\n");
		return 0;
	}
