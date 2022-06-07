/*Q:(i) Given the length and breadth of a rectangle, write a program to 
find whether the area of the rectangle is greater than its 
perimeter. For example, the area of the rectangle with length = 5 
and breadth = 4 is greater than its perimeter. */

#include<stdio.h>
void main()
{
	int l,b,a,p;
	
	printf("Enter the Lenght: ");
	scanf("%i",&l);
	
	printf("Enter the Breadth: ");
	scanf("%i",&b);
	
	a=l*b;
	p=2*(l+b);
	
	if(a>p)
	{
		printf("Area of Rectangle is Greate than its Perimeter");
	}
	if(!(a>p))
	{
		printf("Perimeter of Rectangle is Greater than its Area");
	}
}
