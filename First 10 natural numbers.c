/*Q:1. Write a program in C to display the first 10 natural numbers. */
#include<stdio.h>
void main()
{
	int a,i;
	printf("Enter the Natural Numbers upto ");
	scanf("%i",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("%i\n",i);
	}
}
