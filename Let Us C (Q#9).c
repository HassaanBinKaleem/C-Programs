/*Q:(i) If a four-digit number is input through the keyboard, write a 
program to obtain the sum of the first and last digit of this 
number.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,x,y;
	printf("Enter Four-Digit Numbers (X)=");
	scanf("%i",&x);
	
	a=x%10;
	x=x/10;
	
	b=x%10;
	x=x/10;
	
	c=x%10;
	x=x/10;
	
	d=x%10;
	x=x/10;
	
	y=a+d;
	
	printf("\nThe Sum of first And Last Digit=%i",y);
}

