#include<stdio.h>
void main()
{
	int rows,i,j;
	printf("Enter the Number of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(i==1 || i==rows || j==1 || j==rows-i+1 || i==j ||j==rows)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
