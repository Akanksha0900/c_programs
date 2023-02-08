//square matrix is symmetrical or not
#include<stdio.h>
int main()
{
	int arr[3][3]={{3,4,5},{1,2,3},{6,7,8}},arr1[3][3]={0},i,j,temp,counter=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		arr[i][j]=arr1[j][i];
		}
	}

	//checking for symmetrical behaviour

	for(i=0,i<3,i++){
		for(j=0,j<3,j++){
			if arr[i][j]==arr1[i][j]{
				continue;
			}
			else{
				counter++;
			break;
			}
	       	}
       	}
       	if(counter==0){
        printf("Symmetric Matrix \n");
    }
    else{
        printf("Not a Symmetric Matrix \n");
    }
    return 0;
}

