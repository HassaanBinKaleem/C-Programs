/*Q:(b) Any integer is input through the keyboard. Write a program to 
find out whether it is an odd number or even number.*/

#include<stdio.h>
void main()
{
	int a;
	printf("Enter Integer: ");
	scanf("%i",&a);
	
	if(a%2==0)
	{
		printf("The Integer %i is Even",a);
	}
	if(!(a%2==0))
	{
		printf("The Integer %i is Odd",a);
	}
}
