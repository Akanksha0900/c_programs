//WAP to check a numbver if it is divisible by 11 and 13
#include<stdio.h>
int main(){
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	if(number% 11 && 13 == 0){
		printf("%d is divisible by 11\n",number);
	}
	else{
		printf("%d is divisble by 13\n", number);
	}

	return 0;
}
