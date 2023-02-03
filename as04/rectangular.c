//wap to convert rectangular to polar
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,a,theta;
	printf("enter the rectangular coordinates:");
	scanf("%f %f",&x,&y);
	r=sqrt(x*x+y*y);
	theta=atan(y/x);
	theta=theta*(180.0/3.14);
	printf("polar coordinates(r,theta)=(%f %f)\n",r,theta);
}

