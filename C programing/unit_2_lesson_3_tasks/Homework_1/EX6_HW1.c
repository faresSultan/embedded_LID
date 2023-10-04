#include<stdio.h>

void main()
{
		int x,y,temp;
		
		printf("Enter value of a: ");
		scanf("%d",&x);
		printf("Enter value of b: ");
		scanf("%d",&y);
		
		temp=x;
		x=y;
		y=temp;
		
		printf("The value of a after swapping is: %d\n The value of b after swapping is: %d",x,y);
		
}

