//wap to compute factorial of a number
#include<stdio.h>
int main(){

        int n=6,fact=1;
        while(n>1){
                fact=fact*n--;
        }
        printf("%d",fact);
}

