/*Q:(m) If a five-digit number is input through the keyboard, write a 
program to print a new number by adding one to each of its 
digits. For example if the number that is input is 12391 then 
the output should be displayed as 23402.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	long int n,AN;
	
	printf("Enter Five-Digit Numbers=");
	scanf("%li",&n);
	
	AN=n+11111;
	printf("\nThe Five-Digit Number Becomes=%li",AN);
}
