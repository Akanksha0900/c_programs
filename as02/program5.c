//conversion of farenhiet to celcius//
#include <stdio.h>
void main()
{
	float f,c;
	printf("Enter the farenhiet temperature:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("The celcius temperature is:%.2f \n",c);

}


