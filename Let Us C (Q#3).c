/*Q:(c) If the marks obtained by a student in five different subjects 
are input through the keyboard, find out the aggregate marks 
and percentage marks obtained by the student. Assume that 
the maximum marks that can be obtained by a student in each 
subject is 100.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	                                //Aggregate Marks= Maths+Science+English+Urdu+History;
	                                //Prcentage Marks= Aggregate Marks/5;
	int Maths,Science,English,Urdu,History,AggregateMarks;
	float PercentageMarks;
	
	printf("Enter the marks of Maths Subject=");
	scanf("%i",&Maths);
	
	printf("\nEnter the marks of Science Subject=");
	scanf("%i",&Science);
	
	printf("\nEnter the marks of English Subject=");
	scanf("%i",&English);
	
	printf("\nEnter the marks of Urdu Subject=");
	scanf("%i",&Urdu);
	
	printf("\nEnter the marks of History Subject=");
	scanf("%i",&History);
	
	//Calculate Aggregate Marks;
	AggregateMarks=Maths+Science+English+Urdu+History;
	printf("\n\nAggregate Marks of Five Subjects=%i",AggregateMarks);
	
	//Calculate Percentage Marks; 
	PercentageMarks=AggregateMarks/5;
	printf("\n\nPercentage Marks of a Student=%f",PercentageMarks);
	
	return 0;	
}

