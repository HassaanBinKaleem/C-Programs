#include<stdio.h>
void main()
{
    int rows,i,j;
    printf("Enter the Numbers of Rows: ");
    scanf("%i",&rows);

    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
}