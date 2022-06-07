/*Q:(d) Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	                                              //1C= (33.8-32)*5/9;
	                                              //1C= 33.8F;
	                                              //1C= (5*(F-32))/9;
	float F,C;
	printf("Enter the Temperature in Fahernheite Degree=");
	scanf("%f",&F);
	
	//Calculate Temperature in Centigrate Degree;
	C=(5*(F-32))/9;
	printf("\nThe Temperature in Centigrate Degree=%f",C);
	
	return 0;	
}
