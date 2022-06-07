#include<stdio.h>
void main()
{
	int r,c,i,j,sp;
	printf("Enter the Numbers of Rows: ");
	scanf("%i",&r);
	
	printf("Enter the Numbers of Colums: ");
	scanf("%i",&c);
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			if(i>1 && i<r && j>1 && j<c)
			{
				for(sp=1;sp<=c-2;sp++)
				{
					printf(" ");
				}
				j=j+c-2;
			}
			printf("*");
		}
		printf("\n");
	}
} 
