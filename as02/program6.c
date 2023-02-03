//swap the values of 2 variable using the 3rd variable//
#include <stdio.h>
void main()
{
	int num1,num2,variable;
	printf("enter the two number:");
	scanf("%d %d",&num1,&num2);
	printf("before swapping %d %d\n",num1,num2);
	variable=num2;
	num2=num1;
	num1=variable;
	printf("after swapping %d %d\n",num1,num2);
}



