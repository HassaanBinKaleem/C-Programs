/*Q:(g)Write a program to check whether a triangle is valid or not, 
when the three angles of the triangle are entered through the 
keyboard. A triangle is valid if the sum of all the three angles 
is equal to 180 degrees. */

#include<stdio.h>
void main()
{
	float a1,a2,a3,sum=0;
	
	printf("Enter the 1st Angle: ");
	scanf("%f",&a1);
	
	printf("Enter the 2nd Angle: ");
	scanf("%f",&a2);
	
	printf("Enter the 3rd Angle: ");
	scanf("%f",&a3);
	
	sum=a1+a2+a3;
	
	if(sum==180)
	{
		printf("The Triangle is Valid");
	}
	if(!(sum==180))
	{
		printf("The Triangle is Not Valid");
	}
}

