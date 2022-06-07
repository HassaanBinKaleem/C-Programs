/*Q:(a) If cost price and selling price of an item is input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit 
he made or loss he incurred.*/

#include<stdio.h>
void main()
{
	float cp,sp,profit,loss;
	
	printf("Enter the Cost Price of an Item: ");
	scanf("%f",&cp);
	
	printf("Enter the Selling Price of an Item: ");
	scanf("%f",&sp);
	
	profit=sp-cp;
	loss=cp-sp;
	
	if(sp>cp)
	{
		printf("The Seller has made Profit of: %g",profit);
	}
	
	if(cp>sp)
	{
		printf("The Seller has made Incurred Loss of: %g",loss);
	}
	
	if(cp==sp)
	{
		printf("The Seller has neihter made Profit or Incurred Loss");
	}
}
