//wap to calculate simple interest//
#include<stdio.h>
int main(){
        float principal,time,rate,simplei;
        printf("enter the principal:");
        scanf("%f",&principal);
        printf("enter the time:");
        scanf("%f",&time);
        printf("enter the rate:");
        scanf("%f",&rate);
        simplei=principal*rate*time;
        printf("SI= %.2f \n", simplei);
}

