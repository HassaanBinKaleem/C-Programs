#include<stdio.h>
void main()
{
	int rows,i,j,space;
	printf("Enter the Numbers of Rows: ");
	scanf("%i",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
