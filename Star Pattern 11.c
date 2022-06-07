#include<stdio.h>
void main()
{
	int rows,colums,i;
	printf("Enter the Numbers of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(colums=1;colums<=i;colums++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)
	{
		for(colums=1;colums<=i;colums++)
		{
			printf("* ");
		}
		printf("\n");
	}	
}
