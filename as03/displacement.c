//wap to find displacement//
#include<stdio.h>
int main(){
	float vi,t,a,s;
	printf("enter the initial velocity:");
	scanf("%f",&vi);
	printf("enter the time:");
	scanf("%f",&t);
	printf("enter the acceleration:");
	scanf("%f",&a);
	s=vi*t+0.5*a*t*t;
	printf("the displacement is:",s);
}



