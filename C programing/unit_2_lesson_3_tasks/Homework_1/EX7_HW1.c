#include<stdio.h>

void main()
{
		int x,y;
		
		printf("Enter value of a: ");
		scanf("%d",&x);
		printf("Enter value of b: ");
		scanf("%d",&y);
		
		x=x+y;
		y=x-y;
		x=x-y;
		
		printf("The value of a after swapping is: %d\n The value of b after swapping is: %d",x,y);
		
}

