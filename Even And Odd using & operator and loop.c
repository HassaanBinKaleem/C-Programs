#include<stdio.h>
void main()
{
	int num,a;
	printf("Enter the Numbers=");
	scanf("%i",&num);
	
	for(a=0;a<=num;a++)
	{
		if(a%2==0)
		{
			printf("Even=%i\n",a);
		}
		if(!(a%2==0))
		{
			printf("Odd=%i\n",a);
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
