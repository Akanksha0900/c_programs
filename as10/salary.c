//to calculate gross salary
#include<stdio.h>
int salary(int basicSalary);
int main(){
	int basicSalary;
	printf("Enter basic salary of employee : ");
	scanf("%d", &basicSalary);
	salary(basicSalary);
	return 0;
}
int salary(int basicSalary){
	int DA, HRA, grSalary;
	DA= 0.6*basicSalary;
	HRA=0.15*basicSalary;
	grSalary=DA+HRA+basicSalary;
	printf("DA : %d \n", DA);
	printf("HRA : %d\n", HRA);
	printf("Gross Salary : %d \n ", grSalary);
}
