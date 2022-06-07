/*Q:(e)A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine 
whether the original and reversed numbers are equal or not.*/

#include<stdio.h>
void main()
{
	int a,b,c,d,e,n,reverse;
	printf("Enter the Five-Digit Number (n): ");
	scanf("%i",&n);

	a=n%10;
	n=n/10;
	
	b=n%10;
	n=n/10;
	
	c=n%10;
	n=n/10;
	
	d=n%10;
	n=n/10;
	
	e=n%10;
	n=n/10;
	
	reverse=a*10000+b*1000+c*100+d*10+e*1;
	printf("The Reverse Number is: %i\n",reverse);
	
	if(reverse==n)
	{
		printf("The Input Number & Reverse is Equal");
	}
	if(!(reverse==n))
	{
		printf("The Input Number & Reverse is Not Equal");
	}
}
