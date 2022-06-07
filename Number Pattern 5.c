#include<stdio.h>
void main()
{
	int rows,colums,i;
	printf("Enter the Number of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(colums=i;colums<=i*5;colums=colums+i)
		{
			printf("%i\t",colums);
		}
		printf("\n");
	}
}
