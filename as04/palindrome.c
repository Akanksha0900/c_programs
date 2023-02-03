//WAP to check 3 digit palindrome no without using loop
#include<stdio.h>
int main(){
	int number;
	printf("Enter any three number to check : ");
	scanf("%d", &number);
	int firstDigit = number/100;
	int lastDigit = number%10;
	if(firstDigit == lastDigit){
		printf("%d is a palindrome number \n", number);
	}
	else{
		printf("%d is not a palindrome number \n", number);
	}
	return 0;

}
