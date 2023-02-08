//WAP to calculate compound interest using function
#include<stdio.h>
#include<math.h>
int compoundInterest(float n1, float n2, float n3, float n4);
int main(){
	float principal, rate, time, numberTimes;
	printf("Enter principal : ");
	scanf("%f", &principal);
	printf("Enter rate : ");
    	scanf("%f", &rate);
	printf("Enter time (in years) : ");
    	scanf("%f", &time);
	printf("Enter no. of times interest applied : ");
	scanf("%f", &numberTimes);
	compoundInterest(principal, rate, time, numberTimes);
	return 0;
}
