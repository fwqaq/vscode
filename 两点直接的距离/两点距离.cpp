#include <stdio.h>
#include <math.h>
double dist(double x1,double y1,double x2,double y2);
int main ()
{double x1,x2,y1,y2;
double t;
scanf ("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);
t=dist(x1,y1,x2,y2);
printf ("%f",t);
return 0;
	
	
}
double dist(double x1,double y1,double x2,double y2)
{
	int c,d;
	c=pow(x2-x1,2)+pow(y2-y1,2);
	d=sqrt(c);
	return (d);
}
