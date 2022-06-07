/*Q:(b) The distance between two cities (in km.) is input through the 
keyboard. Write a program to convert and print this distance 
in meters, feet, inches and centimeters.*/

#include<stdio.h>
#include<conio.h>
void main()
{
														//1 Mt= KM*1000;
														//1 CM= Mt*100;
														//1 Inch= Cm/2.54;
														//1 ft= Inch/12;
    float KM,Mt,Ft,Inch,Cm;
    printf("Enter the distance between two cities in KM=");
    scanf("%f",&KM);
    
    Mt=KM*1000;
    printf("\nThe distance between two cities in meters=%f",Mt);
    
    Cm=Mt*100;
    printf("\nThe distance between two cities in centimeters=%f",Cm);
    
    Inch=Cm/2.54;
    printf("\nThe distance between two cities in inches=%f",Inch);
    
    Ft=Inch/12;
    printf("\nThe distance between two cities in feets=%f",Ft);
    
    return 0;	
}
