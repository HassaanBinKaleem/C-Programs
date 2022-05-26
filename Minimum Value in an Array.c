/*Q: Take input of an Array Size 10. Find out Minimum Value.*/
#include<stdio.h>
void main()
{
	int a[100],size,min,i,index;
	
	printf("Enter the Size of an Array: ");
	scanf("%i",&size);
	
	printf("The integers are:\n",size);
	
	for(i=0;i<size;i++)
	{
		scanf("%i",&a[i]);
	}
	
	min=a[0];
	index=0;
	
		for(i=0;i<size;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			index=i;
		}
	}
	
	printf("The Minimum Value in an Array is: %i at Index Number: %i",min,index);
}
