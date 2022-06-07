/*Q:A certain grade of steel is graded according to the following 
conditions: 
(i) Hardness must be greater than 50 
(ii) Carbon content must be less than 0.7 
(iii) Tensile strength must be greater than 5600 
The grades are as follows: 
Grade is 10 if all three conditions are met 
Grade is 9 if conditions (i) and (ii) are met 
Grade is 8 if conditions (ii) and (iii) are met 
Grade is 7 if conditions (i) and (iii) are met 
Grade is 6 if only one condition is met 
Grade is 5 if none of the conditions are met*/

#include<stdio.h>
void main()
{
	float c;
	int h,t,Grade;
	
	printf("Enter Hardness(h)=");
	scanf("%i",&h);
	
	printf("Enter Carbon(c)=");
	scanf("%f",&c);
	
	printf("Enter Tensile(t)=");
	scanf("%i",&t);
	
	if(h>50 && c<0.7 && t>5600)
	{
		Grade=10;
	}
	
	if(h>50 && c<0.7 && t<=5600)
	{
		Grade=9;
	}
	
	if(h<=50 && c<0.7 && t>5600)
	{
		Grade=8;
	}
	
	if(h>50 && c>=0.7 && t>5600)
	{
		Grade=7;
	}
	
	if((h>50 && c>=0.7 && t<=5600) || (h<=50 && c<0.7 && t<=5600) || (h<=50 && c>=0.7 && t>5600))
	{
		Grade=6;
	}
	
	if(h<=50 && c>=0.7 && t<=5600)
	{
		Grade=5;
	}
	
	printf("\nGrade=%i",Grade);
}
