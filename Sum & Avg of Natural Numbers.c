/*Q: Write a program in C to read 10 numbers from keyboard and find their sum and average.*/
#include<stdio.h>
void main()
{
	int a,i,sum=0;
	float avg;
	
	printf("Enter the Natural Numbers : ");
	scanf("%i",&a);
	
	for(i=1;i<=a;i++)
	{
		printf("%i\n",i);
		
		sum=sum+i;
		
		avg=sum/10.0;
	}
	printf("Sum : %i\nAverage : %f",sum,avg);
}
