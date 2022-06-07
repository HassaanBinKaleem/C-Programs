/*Q:Take input of three numbers and find out greater number?*/
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the Value of a: ");
	scanf("%i",&a);
	
	printf("Enter the Value of b: ");
	scanf("%i",&b);
	
	printf("Enter the Value of c: ");
	scanf("%i",&c);
	
	if(a>b && a>c)
	{
		printf("\n%i is Greater",a);
	}
	if(b>a && b>c)
	{
		printf("\n%i is Greater",b);
	}
	if(c>a && c>b)
	{
		printf("\n%i is Greater",c);
	}
}
