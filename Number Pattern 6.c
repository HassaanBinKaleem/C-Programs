#include<stdio.h>
void main()
{
	int rows,colums,i,space;
	printf("Enter the Numbers of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		for(colums=1;colums<=i;colums++)
		{
			
			printf("%i ",i);
		}
		printf("\n");
	}
}
