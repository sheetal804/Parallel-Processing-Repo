#include<stdio.h>
#include<math.h>
typedef struct Point{
	double x,y;
}Point;
typedef struct Segment{
	Point p1,p2;
}LS;
void initP(Point *p){
	printf("x: ");
	scanf("%lf",&(p->x));
	printf("y: ");
	scanf("%lf",&(p->y));
}
void initLS(LS *l){
	initP(&(l->p1));
	initP(&(l->p2));
}
int IsIntersecting(LS l1,LS l2){
	double d,q1,q2,x,y,l,m;
	d=(l1.p1.x-l1.p2.x)*(l2.p1.y-l2.p2.y)-(l1.p1.y-l1.p2.y)*(l2.p1.x-l2.p2.x);
	if(d==0)
		return 0;
	else{
		q1=(l1.p1.x*l1.p2.y)-(l1.p1.y-l1.p2.x);
		q2=(l2.p1.x*l2.p2.y)-(l2.p1.y-l2.p2.x);
		x=(q1*(l2.p1.x-l2.p2.x)-(l1.p1.x-l1.p2.x)*q2)/d;
		y=(q1*(l2.p1.y-l2.p2.y)-(l1.p1.y-l1.p2.y)*q2)/d;
		return 1;
	}
}
int main(){
	LS l1,l2;
	initLS(&l1);
	initLS(&l2);
	if(IsIntersecting(l1,l2))
		printf("These line segment intersect each other.\n");
	else
		printf("These line segments doesnot intersect each other.\n");
	return 0;
}
