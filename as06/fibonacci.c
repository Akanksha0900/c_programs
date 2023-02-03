//WAP to print n fibonacci numbers
#include<stdio.h>
int main(){
	int num, a=0, b=1, c=0, count=0;
	printf("Enter value of n : ");
	scanf("%d", &num);
	printf("%d", a);
	while (count<=num)
	{
		c=a;
		a+=b;
		b=c;
		printf(" %d \n", a);
		count++;
	}
}

