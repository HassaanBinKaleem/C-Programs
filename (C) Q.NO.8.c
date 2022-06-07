/*Q:(h)Find the absolute value of a number entered through the 
keyboard. */

#include<stdio.h>
void main()
{
	int a;
	printf("Enter the Number: ");
	scanf("%i",&a);
	
	if(a<0)
	{
		a=a*-1;
		printf("Number: %i",a);
	}
}
