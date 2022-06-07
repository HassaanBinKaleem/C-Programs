/*Q:(k) A cashier has currency notes of denominations 10, 50 and 
100. If the amount to be withdrawn is input through the 
keyboard in hundreds, find the total number of currency notes 
of each denomination the cashier will have to give to the 
withdrawer.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int Money,Hundred,Fifty,Ten;
	                                              //Hundred=Money/100;
	                                              //fifty=Money/50;
	                                              //Ten=Money/10;
	printf("Enter the value of Money=");
	scanf("%i",&Money);
	
	Hundred=Money/100;
	printf("\nHundred=%i",Hundred);
	
	Fifty=Money/50;
	printf("\nFifty=%i",Fifty);
	
	Ten=Money/10;
	printf("\nTen=%i",Ten);	
}

