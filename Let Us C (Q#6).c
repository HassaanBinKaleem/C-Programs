/*Q:(f) Two numbers are input through the keyboard into two 
locations C and D. Write a program to interchange the 
contents of C and D.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c,d;
	                                                   //c=b;
	                                                   //d=a;
	printf("Enter the value of c=");
	scanf("%f",&c);
	
	c=b;
	printf("\nEnter Value of b=%f",c);
	
	printf("\n\nEnter the value of d=");
	scanf("%f",&d);
	
	d=a;
	printf("\nEnter Value of a=%f",d);
}
