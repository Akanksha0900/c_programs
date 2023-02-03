//enter 2 number and fimd the sum and average//
#include <stdio.h>
void main()
{
	int a,b,sum,avg;
	printf("Enter num1 and num2:");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("The sum is:%d \n",sum);
	avg=sum/2;
	printf("the average is:%d \n",avg);
}

