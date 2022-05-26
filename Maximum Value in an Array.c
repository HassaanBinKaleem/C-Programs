/*Q: Take input of an Array Size 10. Find out Maximum Value.*/ 
#include<stdio.h>
void main()
{
	int a[100],size,max,i,index;
	
	printf("Enter the Size of an Array: ");
	scanf("%i",&size);
	
	printf("The integers are:\n",size);
	
	for(i=0;i<size;i++)
	{
		scanf("%i",&a[i]);
	}
	
	max=a[0];
	index=0;
	
		for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			index=i;
		}
	}
	
	printf("The Maximum Value in an Array is: %i at Index Number: %i",max,index);
}
