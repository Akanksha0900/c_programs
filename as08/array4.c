#include<stdio.h>
int main()
{
	int A[1000],i,n,min,max;
	printf("Enter the limt of array:");
	scanf("%d",&n);
	printf("Enter the values of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	max=A[0];
	min=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
		if(A[i]<min)
		{
			min=A[i];
		}
	}

	printf("MAX:%d\n",max);
	printf("MIN:%d\n",min);
}


