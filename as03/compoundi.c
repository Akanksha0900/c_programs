//wap to calculate compound interest//
#include<stdio.h>
#include<math.h>
int main(){
	float principal,time,rate,no_times,compoundi;
	printf("enter the principal:");
	scanf("%f",&principal);
	printf("enter the time:");
	scanf("%f",&time);
	printf("enter the rate:");
	scanf("%f",&rate);
	printf("enter the no_times:");
	scanf("%f",&no_times);
	compoundi=principal*pow((1+rate/no_times*100),no_times*time);
	printf("CI= %.2f \n", compoundi);
}


