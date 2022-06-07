/*Q:(h) If a five-digit number is input through the keyboard, write a 
program to reverse the number.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	long int a,b,c,d,e,x,y;
	printf("Enter Five-Digit Number X=");
	scanf("%li",&x);
	
	a=x%10;
	x=x/10;
	
    b=x%10;
	x=x/10;
	
	c=x%10;
	x=x/10;
	
	d=x%10;
	x=x/10;
	
	e=x%10;
	x=x/10;
	
	y=a*10000+b*1000+c*100+d*10+e*1;
	
	printf("\nReverse of Five-Digit Numbers=%li",y);	
}
