/*Q:(l) Given a point (x, y), write a program to find out if it lies on the 
x-axis, y-axis or at the origin, viz. (0, 0). */

#include<stdio.h>
void main()
{
	float x,y;
	
	printf("Enter the x coordinate: ");
	scanf("%f",&x);
	
	printf("Enter the y coordinate: ");
	scanf("%f",&y);
	
	if(x==0 && y==0)
	{
		printf("\nThe Point lies on the Origin");
	}
	if(x==0 && y!=0)
	{
		printf("\nThe Point lies on the y-axis");
	}
	if(x!=0 && y==0)
	{
		printf("\nThe Point lies on the x-axis");
	}
	if(x!=0 && y!=0)
	{
		printf("\nThe Point lies on the Plane");
	}
}
