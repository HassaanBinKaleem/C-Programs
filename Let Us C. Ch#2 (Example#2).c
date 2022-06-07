/*Q:Example 2.4: The marks obtained by a student in 5 different 
subjects are input through the keyboard. The student gets a 
division as per the following rules: 
Percentage above or equal to 60 - First division 
Percentage between 50 and 59 - Second division 
Percentage between 40 and 49 - Third division 
Percentage less than 40 - Fail 
Write a program to calculate the division obtained by the student. 
There are two ways in which we can write a program for this 
example. These methods are given below.*/

#include<stdio.h>
void main()
{
	float S1,S2,S3,S4,S5,am,mp;
	printf("Enter the Marks of S1=");
	scanf("%f",&S1);
	
	printf("\nEnter the Marks of S2=");
	scanf("%f",&S2);
	
	printf("\nEnter the Marks of S3=");
	scanf("%f",&S3);
	
	printf("\nEnter the Marks of S4=");
	scanf("%f",&S4);
	
	printf("\nEnter the Marks of S5=");
	scanf("%f",&S5);
	
	//Calculate Aggregate Marks;
	am=S1+S2+S3+S4+S5;
	printf("\nThe Aggregate Marks=%g",am);
	
	//Calculate Percentage Marks;
	mp=am/500*100;
	printf("\nThe Percentage Marks=%g",mp);
	
	//Conditions;
	if(mp>=60)                                         //First Division
	{
		printf("\n\nFirst Division");
	}
	
	if(mp>=50 && mp<=59)                              //Second Division 
	{
		printf("\n\nSecond Division");
	}
	
	if(mp>=40 && mp<=49)                             //Third Division 
	{
		printf("\n\nThird Division");
	}
	
	if(mp<40)
	{
		printf("\n\nFail");                     //Fail
	}
}
