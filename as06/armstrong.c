//WAP to check armstrong number
#include<stdio.h>
#include<math.h>
int main(){
	int num,n1, digit, sum=0;
	printf("Enter any number : ");
	scanf("%d", &num);
	n1=num;
	while(num){
		digit = num%10;
		num=num/10;
		sum+=pow(digit,3);
	}
	if(sum==n1){
		printf("%d is an armstrong number \n",n1);
	}
	else{
		printf("%d is not an armstrong number \n",n1);
	}
	return 0;
}
