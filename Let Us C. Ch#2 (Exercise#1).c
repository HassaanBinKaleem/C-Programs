/*Q:If his basic salary is less than Rs. 1500, then HRA = 10% of basic 
salary and DA = 90% of basic salary. If his salary is either equal to 
or above Rs. 1500, then HRA = Rs. 500 and DA = 98% of basic 
salary. If the employee's salary is input through the keyboard write 
a program to find his gross salary.*/

#include<stdio.h>
void main()
{
	float bs,da,hra,gs;
	printf("Enter Basic Salary(bs)=");
	scanf("%f",&bs);
	
	if(bs<1500)
	{
		da=bs*90/100;
		hra=bs*10/100;
	}
	
	if(bs>=1500)
	{
		da=bs*98/100;
		hra=500;
	}
	
	gs=bs+da+hra;
	printf("\nThe Gross Salary(gs) is=%g",gs);
}
