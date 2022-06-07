/*Q:Take input of two numbers and find out greater number?*/
#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the Value of x: ");
	scanf("%i",&x);
	
	printf("Enter the Value of y: ");
	scanf("%i",&y);
	
	if(x>y)
	{
		printf("\n%i is Greater Than %i",x,y);
	}
	if(y>x)
	{
		printf("\n%i is Greater Than %i",y,x);
	}
}
