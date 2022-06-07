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
		for(colums=1;colums<=(i*2)-1;colums++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=rows-1;i>=1;i--)
	{
		for(space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		for(colums=1;colums<=(i*2)-1;colums++)
		{
			printf("*");
	    }
	    printf("\n");
	}
}
