//WAP to check Prime numbers
#include<stdio.h>
int main(){
	int num;
	printf("Enter a number to check : ");
	scanf("%d", &num);
	for(int i=2;i<num;i++){
		if (num%i==0){	
			printf("%d is not a prime number \n",num);
			break;
		}
			else{
			 printf("%d is a prime number \n", num);
			 break;
			}

	}
	return 0;
}


