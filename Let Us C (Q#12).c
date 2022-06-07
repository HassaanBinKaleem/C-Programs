/*Q:(l) If the total selling price of 15 items and the total profit earned 
on them is input through the keyboard, write a program to 
find the cost price of one item.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	int SP,TP,Total,CP,OneItem;
	                                                    //Total=SP+TP;
	                                                    //CP=Total-SP;
	                                                    //OneItem=CP/15;
	printf("Enter Total Selling Price of 15 Items=");
	scanf("%i",&SP);
	
	printf("Enter Total Profit earned on Items=");
	scanf("%i",&TP);
	
	Total=SP+TP;
	printf("\n\nTotal Cost=%i",Total);
	
	CP=Total-SP;
	printf("\n\nCost Price=%i",CP);
	
	OneItem=CP/15;
	printf("\n\nCost Price of One Item=%i",OneItem);
}
