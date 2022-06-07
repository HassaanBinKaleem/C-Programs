#include<stdio.h>
void main()
{
	int i,j,rows;
	printf("Enter the Numbers of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
