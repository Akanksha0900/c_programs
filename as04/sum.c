//program to obtain sum of first and last digit of no
#include<stdio.h>
int main(){
	int x,sum=0,first_digit,last_digit;
	printf("enter the four digit_number:");
	scanf("%d",&x);
	first_digit=x%1000;
	last_digit=x%10;
	sum= first_digit+last_digit;
	printf("the sum is:%d \n",sum);
}

