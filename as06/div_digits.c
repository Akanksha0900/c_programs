//WAP to find numbers which is divisible by its sum of digits between 1 to 10,000
#include<stdio.h>
int main()
{
    int sum, num;
    for(int i=1; i<=10000;i++){
        int same_no=i;
        while (same_no){
            sum+=same_no%10;
            same_no=same_no/10;
        }
        if(i%sum==0){
            printf("%d \n", i);
        }
        sum=0;
    }
    return 0;
}
