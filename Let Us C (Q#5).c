/*Q:(e) The length & breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the 
area & perimeter of the rectangle, and the area & 
circumference of the circle.*/

#include<stdio.h>
#include<conio.h>
void main()
{
	                                                    //AR= L*B;
	                                                    //PR= 2*(L+B);
	                                                    //AC=3.14*R*R;
	                                                    //CC=2*(3.14*R);
	float L,B,R,AR,PR,AC,CC;
	printf("Enter the Lenght of Rectangle(L)=");
	scanf("%f",&L);
	
	printf("\nEnter the Breath of Rectangle(B)=");
	scanf("%f",&B);
	
	//Calculate The Area of Rectangle;
	AR=L*B;
	printf("\nThe Area of Rectangle=%f",AR);
	
	//Calculate The Perimeter of Rectangle;
	PR=2*(L+B);
	printf("\nThe Perimeter of Rectangle=%f",PR);
	
	printf("\n\nEnter the Radius of Circle(R)=");
	scanf("%f",&R);
	
	//Calculate The Area of Circle;
	AC=3.14*R*R;
	printf("\nThe Area of Circle=%f",AC);
	
	//Calculate The Circumferance of Circle;
	CC=2*(3.14*R);
	printf("\nThe Circumferance of Circle=%f",CC);
	
	return 0;	
}
