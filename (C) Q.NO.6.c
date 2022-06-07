/*Q:(f)If the ages of Ram, Shyam and Ajay are input through the 
keyboard, write a program to determine the youngest of the 
three.*/

#include<stdio.h>
void main()
{
	int ar,as,aa;
	printf("Enter the Age of Ram: ");
	scanf("%i",&ar);
	
	printf("Enter the Age of Shyam: ");
	scanf("%i",&as);
	
	printf("Enter the Age of Ajay: ");
	scanf("%i",&aa);
	
	if(ar<as && ar<aa)
	{
		printf("Ram is Youngest");
	}
	
	if(as<ar && as<aa)
	{
		printf("Shyam is Youngest");
	}
	
	if(aa<as && aa<ar)
	{
		printf("Ajay is Youngest");
	}
}
