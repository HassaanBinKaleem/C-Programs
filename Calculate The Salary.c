/*Q:Example 2.6: Write a program to calculate the salary as per the 
following table: 
Gender Years of Service Qualifications Salary 
Male >= 10 Post-Graduate 15000 
>= 10 Graduate 10000 
< 10 Post-Graduate 10000 
< 10 Graduate 7000 
Female >= 10 Post-Graduate 12000 
>= 10 Graduate 9000 
< 10 Post-Graduate 10000 
< 10 Graduate 6000*/
#include<stdio.h>
void main()
{
	char g,f,m;
	int yos,qual,pg,grad,sal;
	
	printf("Enter Gender=");
	scanf("%c",&g);
	
	printf("\nEnter Year Of Service=");
	scanf("%i",&yos);
	 
	printf("\nEnter Qualification=");
	scanf("%i",&qual);
	pg=1;
	grad=0;

	if(g=='m' && yos>=10 && qual==1)
	{
		sal=15000;
	}
	
	if(g=='m' && yos>=10 && qual==0)
	{
		sal=10000;
	}
	
	if(g=='m' && yos<10 && qual==1)
	{
		sal=10000;
	}

	if(g=='m' && yos<10 && qual==0)
	{
		sal=7000;
	}
	
	if(g=='f' && yos>=10 && qual==1)
	{
		sal=12000;
	}
	
	if(g=='f' && yos>=10 && qual==0)
	{
		sal=9000;
	}
	
	if(g=='f' && yos<10 && qual==1)
	{
		sal=10000;
	}
	
	if(g=='f' && yos<10 && qual==0)
	{
		sal=6000;
	}
	
	printf("\nSalary=%i",sal);
}
