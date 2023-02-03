/WAP to print prime numbers within given range
#include<stdio.h>
int main()
{
    int initial, final, count=0;
    printf("Enter starting and end range : ");
    scanf("%d %d", &initial, &final);
    for(initial; initial<=final; initial++){
        for(int i=2;i<initial;i++){
            if(initial%i==0){
                count++;
            }
        }
        if(count==0){
            printf("%d ", initial);
        }
        count=0;
    }
    return 0;
}
