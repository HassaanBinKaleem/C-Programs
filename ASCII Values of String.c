#include<stdio.h>
void main()
{
	int i,size;
	char name[150];
	                     //printf("Enter the Text: ");
	                     //scanf("%s",&name);
	                     //name=getche;
	printf("Enter Size of an Array: ");
	scanf("%i",&size);
	
	                     //name[i]!='\0
	for(i=0;i<size;i++)
	                     //printf("ASCII Code of %c is =%i\n",name[i],name[i]);
	{
		scanf("%s",&name[i]);
	}
	printf("\n ASCII Codes are: \n");
	
	for(i=0;i<size;i++)
	                     //printf("All ASCII Codes are:\n ");
	{
		printf("%i ",name[i]);
	}                     
}
