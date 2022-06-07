#include<stdio.h>
void main()
{
	int rows,colums,i,k;
	printf("Enter the Number of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(colums=1;colums<=rows;colums++)
		{
			k=i+colums-1;
			if(k>4)
			{
				k=k-4;
			}
			printf("%i ",k);
		}
		printf("\n");
	}
}
