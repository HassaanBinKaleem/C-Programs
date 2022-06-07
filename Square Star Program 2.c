#include<stdio.h>
void main()
{
	int i,j,sp,rows,colums;
	printf("Enter the Number of Rows: ");
	scanf("%i",&rows);
	
	printf("Enter the Number of Colums: ");
	scanf("%i",&colums);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=colums;j++)
		{
			if(i>1 && i<rows && j>1 && j<colums)
			{
				for(sp=1;sp<=colums-2;sp++)
				{
					printf(" ");
				}
				j=j+(colums-2);
			}
			printf("*");
		}
		printf("\n");
	}
}
