/*Q:(j) In a town, the percentage of men is 52. The percentage of 
total literacy is 48. If total percentage of literate men is 35 of 
the total population, write a program to find the total number of illiterate men 
and women if the population of the town is 80,000..*/

#include<stdio.h>
#include<conio.h>
void main()
{
	float PM,PW,TL,LM,LW,TP,ILM,ILW;
	                                                //PM= TP*52/100;
	                                                //PW= TP-PM;
	                                                //TL= TP*48/100;
	                                                //LM= TP*35/100;
	                                                //LW= TP*13/100;
	                                                //ILM= PM-LM;
	                                                //ILW= PW-LW;
	printf("Enter the Total Population(TP)=");
	scanf("%f",&TP);
	
	//Calculate The Percentage of Men;
	PM=TP*52/100;
	printf("\nThe Percentage of Men=%g",PM);
	
	//Calculate The Percentage of Total Literacy;
	TL=TP*48/100;
	printf("\nThe Percentage of Total Literacy=%g",TL);
	
	//Calculate The Percentage of Women;
	PW=TP-PM;
	printf("\nThe Percentage of Women=%g",PW);
	
	//Calculate The Literate Men;
	LM=TP*35/100;
	printf("\nThe Litrate Men=%g",LM);
	
	//Calculate The Literate Women;
	LW=TP*13/100;
	printf("\nThe Literate Women=%g",LW);
	
	//Calculate Illiterate Men;
	ILM=PM-LM;
	printf("\nThe Illiterate Men=%g",ILM);
	
	//Calculate Illiterate Women;
	ILW=PW-LW;
	printf("\nThe Illiterate Women=%g",ILW);	   	
}
