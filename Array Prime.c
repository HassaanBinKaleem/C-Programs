
#include<stdio.h>
void main()
{
	int a[100],size,i;
	printf("Enter the size of Array: ");
	scanf("%i",&size);
	printf("Enter the Elements of an Array:\n",size);
	
	for(i=0;i<size;i++)
	{
		scanf("%i",&a[i]);
		if(a[i]%i==0)
	{
		printf("The %i is Not a Prime",a[i]);
	}
	if(a[i]==i)
	{
		printf("The %i is Prime",a[i]);
	}
	printf("\n");
	}
}
