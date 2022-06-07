#include<stdio.h>
void main()
{
	int i,j,rows,space;
	printf("Enter the Numbers of Rows: ");
	scanf("%i",&rows);
	
	for(i=rows;i>=1;i--)
	{
		for(space=1;space<=(rows-i);space++)
		{
			printf(" ");
		}
		
		for(j=1;j<=(i*2)-1;j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
}
