/*Q: Take input of an array size 10. Find out Mean Value.*/
#include<stdio.h>
void main()
{
	int sum=0,a[100],i;
	float avg,n;
	printf("Enter the Size of an Array: \n");
	scanf("%f",&n);
	printf("Enter the Value in an Array: \n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%i",&a[i]);
		sum=sum+a[i];
	}
	printf("Enter the Sum: %i\n",sum);
	avg=sum/n;
	printf("Enter the Average: %f",avg);
}
