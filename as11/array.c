#include<stdio.h>
int arr1(int arr[]);
int main()
{
	//declare an array
	int arr[10]={12,34,56,2,34,45,56,78,98,80};
	arr1(arr);

}

int arr1(int arr[]){
	//printing an array using for loop
        for(int i=0;i<10;i++)
                printf("%d \n",arr[i]);
        return 0;
}

