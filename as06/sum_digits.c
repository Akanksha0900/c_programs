//wap to compute sum of digits of a given number
#include<stdio.h>
int main(){

	int num,digit,sum=0;
	printf("enter the four digit number:");
	scanf("%d",&num);
	while(num>0){
		digit=num%10;
		num-num/10;
		sum+=digit;
	}
	printf("the sum of the digits is:%d /n",sum);
	return 0;

}



