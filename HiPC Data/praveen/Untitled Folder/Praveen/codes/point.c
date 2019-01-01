#include<stdio.h>
#include<math.h>
typedef struct point{
	double x,y;
}Point;
double distance(Point A,Point B){
	 return sqrt(pow((A.x-B.x),2)+pow((A.y-B.y),2));
}
void init(Point *A){
	printf("x: ");
	scanf("%lf",&(A->x));
	printf("y: ");
	scanf("%lf",&(A->y));
}
int main(){
	Point A,B,C;
	double a,b,c,s,area;
	init(&A);
	init(&B);
	init(&C);
	a=distance(B,C);
	b=distance(A,C);
	c=distance(A,B);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	if(area==0)
		printf("Points are collinear.\n");
	else
		printf("Area :%lf\n",area);
	return 0;
}	
