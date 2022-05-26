#include<stdio.h>
int main()
{
    int marks[4],i;
    
    for(i=0;i<=4;i++)
    {
       printf("Enter the value of %i element in Array\n",i);
       scanf("%i",&marks[i]);
    }

     for(i=0;i<=4;i++)
     {
        printf("The value of %i element in Array is %i\n",i,marks[i]);
     }
}
