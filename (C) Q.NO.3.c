/*Q:(c)Any year is input through the keyboard. Write a program to 
determine whether the year is a leap year or not.

(Hint: Use the % (modulus) operator)*/
       
#include<stdio.h>
void main()
{
	int year;
	printf("Enter Year: ");
	scanf("%i",&year);
	
	if(year%4==0)
	{
		printf("The %i Year is Leap Year",year);
	}
	if(!(year%4==0))
	{
		printf("The %i Year is Not Leap Year",year);
	}
	
}
    
