/*
 * main.c
 *
 *  Created on: Feb 16, 2024
 *      Author: Fares Sultan
 */
#include<stdio.h>

int main()
{


return 0;
}


	/*EX1*/
/*float a[2][2],b[2][2],sum[2][2];
	int i,j;

	printf("Enter the Elements of the first Matrix\n\n");
	fflush(stdout);
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\nEnter the element a[%d][%d]: ",i+1,j+1);
			fflush(stdout);fflush(stdin);
			scanf("%f",&a[i][j]);
		}

	}

	printf("\nEnter the Elements of the second Matrix\n\n");
	fflush(stdout);
	for (i=0;i<2;i++)
	{
			for(j=0;j<2;j++)
			{
				printf("\nEnter the element b[%d][%d]: ",i+1,j+1);
				fflush(stdout);fflush(stdin);
				scanf(" %f",&b[i][j]);
			}

	}



	for (i=0;i<2;i++)
	{
				for(j=0;j<2;j++)
				{
					sum[i][j] = a[i][j] + b[i][j];
				}

	}
	printf("\nThe Sum of Matrix is:\n");

	for (i=0;i<2;i++)
		{
				for(j=0;j<2;j++)
				{
					printf("%f\t",sum[i][j]);
					fflush(stdout);
				}
				printf("\n");
				fflush(stdout);

		}

*/

/*-----------------------------------------------*/

		/*EX2*/

/*
	float arr[100]={0},avg=0;
	int size =0,i;
	printf("Enter the number of data: ");
	fflush(stdout);
	scanf(" %d",&size);
	fflush(stdin);

	for(i=0;i<size;i++)
	{

		printf("\nEnter number: ");
		fflush(stdout);
		scanf("%f", &arr[i]);
		fflush(stdin);
		avg += arr[i];
	}
	avg /= size;
	printf("Avrage = %f",avg);

*/

/*-----------------------------------------------*/

				/*-------EX3--------*/

/*
int a[20][20]={0},transpose[20][20]={0};
		int i,j;
		int rows =0,columns=0;

		printf("Enter the dimensions of the Matrix (rows X columns)\n\n");
		fflush(stdout);
		scanf("%d %d",&rows,&columns);

		for (i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				printf("\nEnter the element a[%d][%d]: ",i+1,j+1);
				fflush(stdout);fflush(stdin);
				scanf("%d",&a[i][j]);
			}

		}

		printf("\nThe Entered Matrix is:\n");

		for (i=0;i<rows;i++)
		{
			for(j=0;j<columns;j++)
			{
				printf("%d\t",a[i][j]);
				fflush(stdout);
			}
				printf("\n");
				fflush(stdout);
		}

		for (i=0;i<columns;i++)
		{
			for(j=0;j<rows;j++)
			{
				transpose[i][j] = a[j][i];
			}
		}


		printf("\nThe transpose Matrix is:\n");

		for (i=0;i<columns;i++)
		{
			for(j=0;j<rows;j++)
			{
				printf("%d\t",transpose[i][j]);
				fflush(stdout);
			}
				printf("\n");
				fflush(stdout);
		}

*/
/*-----------------------------------------------*/
            /*---------Ex4-----------*/
/*int arr[20]={0},size=0,i,number,loc;

	printf("Eneter the no. of elements: ");
	fflush(stdout);
	scanf("%d", &size);
	fflush(stdin);
	printf("\nEneter the elements: ");
	fflush(stdout);

	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		fflush(stdin);

	}

	printf("\nEneter the element to be inserted: ");
	fflush(stdout);
	scanf("%d", &number);

	printf("\nEneter the Location: ");
	fflush(stdout);
	scanf("%d", &loc);
	arr[loc-1] = number;

	printf("\nThe new array is: \n");
	fflush(stdout);

	for(i=0;i<size;i++)
	{
			printf("%d ",arr[i]);
			fflush(stdout);

	}*/


