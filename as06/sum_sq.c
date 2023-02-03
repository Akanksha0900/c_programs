//wap to compute sum of square of first n natural number
#include<stdio.h>
int main(){
        int n,sum_sq;
        printf("enter the number:");
        scanf("%d",&n);
        sum_sq=n*(n+1)*(2*n+1)/6;
        printf("the sum of squares is %d \n",sum_sq);
        return 0;
}

