//program to create an identity matrix 
#include<stdio.h>
int main()
{

	int i,j,row,column;
	printf("enter the number of rows:");
	scanf("%d",&row);
	printf("enter the number of column:");
        scanf("%d",&column);
	int identity_matrix[row][column];
	for(i=0;i<row;i++){
		for(j=0;j<column;j++)
		{
			if(i==j)
				identity_matrix[i][j]=1;
			else
				identity_matrix[i][j]=0;
		}
	}
	printf("\nidentity_matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
	       		printf("%d\t", identity_matrix[i][j]);
		}
	       	printf("\n");
	}
}

