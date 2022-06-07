//Q: Enter the Numbers of Rows & Colums.

#include<stdio.h>
void main()
{
	int rows,colums,i,j;
	printf("Enter the Numbers of Rows=");
	scanf("%i",&rows);
	
	printf("Enter the Numbers of Colums=");
	scanf("%i",&colums);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=colums;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
