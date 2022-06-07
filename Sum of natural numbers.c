/*Q: Write a C program to find the sum of first 10 natural numbers.*/
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	
	printf("Enter the Natural Numbers upto : ");
	scanf("%i",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("%i\n",i);
		sum=sum+i;
	}
	printf("The Sum is : %i\n",sum);	
}
