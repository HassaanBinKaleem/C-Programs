/*Q: (a) Ramesh’s basic salary is input through the keyboard. His 
dearness allowance is 40% of basic salary, and house rent 
allowance is 20% of basic salary. Write a program to calculate 
his gross salary.*/

#include<stdio.h>
#include<conio.h>
void main()
{
                                                      //BasicSalary=x;
                                                      //DA=40%;
                                                      //DA=((BasicSalary*40)/100);
                                                      //HRS=20%;
                                                      //HRS=((BasicSalary*20)/100);
                                                      //GrossSalary=BasicSalary+DA+HRA;
	float BasicSalary,DA,HRA,GrossSalary;
	printf("Enter the value of Ramesh Basic Salary=");
	scanf("%f",&BasicSalary);
	
	//Calculate Dearness Allowance;
	DA=((BasicSalary*40)/100);
	printf("\nDearness Allowance=%f",DA);
	
	//Calculate Rent House Allowance;
	HRA=((BasicSalary*20)/100);
	printf("\nRent House Allowance=%f",HRA);
	
	//Calculate Gross Salary;
	GrossSalary=BasicSalary+DA+HRA;
	printf("\n\nGross Salary=%f",GrossSalary);
	
	return 0;
}




