/*Q:(g) If a five-digit number is input through the keyboard, write a 
program to calculate the sum of its digits. 
(Hint: Use the modulus operator ‘%’)*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,Sum=0,n;
	printf("Enter Five-Digit Number=");
	scanf("%i",&a);
	
	n=a%10;               //First
	a=a/10;
	Sum=Sum+n;
	
	n=a%10;               //Second
	a=a/10;
	Sum=Sum+n;
	
	n=a%10;                //Third
	a=a/10;
	Sum=Sum+n;
	
	n=a%10;                 //Forth
	a=a/10;
	Sum=Sum+n;
	
	n=a%10;                  //Fifth
	a=a/10;
	Sum=Sum+n;
	
	printf("\nSum of Values=%i",Sum);
}
