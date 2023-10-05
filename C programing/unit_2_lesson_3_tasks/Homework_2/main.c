# include<stdio.h>

int main()
{
				/*EX1*/
//	int x;
//	printf("Enter an integer: ");
//	fflush(stdout);fflush(stdin);
//	scanf("%d",&x);
//	x=abs(x);
//	if ((x%2)==0)
//	{
//		printf("%d is even",x);
//	}
//	else
//	{
//		printf("%d is odd",x);
//
//	}


//////////////////////////////////////////////////////////////////

				/*EX2*/

//	char x;
//	printf("Enter a letter: ");
//	fflush(stdout);fflush(stdin);
//	scanf("%c",&x);
//
//	switch(x)
//	{
//	case 'A': case 'a': case 'E': case 'e': case 'I': case 'i': case 'O': case 'o': case 'U': case 'u':
//		printf("%c is vowel",x);
//		break;
//
//	default:
//		printf("%c is constant",x);
//	}


//////////////////////////////////////////////////////////////////



				/*EX3*/

//	float x,y,z;
//	printf("Enter three numbers: ");
//	fflush(stdout);fflush(stdin);
//	scanf("%f %f %f",&x,&y,&z);
//
//	if ((x>y)&&(x>z))
//	{
//		printf("largest number is %.2f",x);
//
//	}
//	else if ((y>x)&&(y>z))
//	{
//		printf("largest number is %.2f",y);
//
//	}
//	else
//	{
//		printf("The largest number is %.2f",z);
//	}

/////////////////////////////////////////////////////////////////



	             /*EX4*/

//	float x;
//	printf("Enter a number: ");
//	fflush(stdout);fflush(stdin);
//	scanf("%f",&x);
//	if (x==0)
//	{
//		printf("You entered Zero!");
//	}
//	else if(x>0)
//	{
//		printf("%.2f is positive",x);
//
//	}
//	else
//	{
//		printf("%.2f is negative",x);
//
//	}


/////////////////////////////////////////////////////////////////


					/*EX5*/

//	char x;
//	printf("Enter a Character: ");
//	fflush(stdout);fflush(stdin);
//	scanf("%c",&x);
//
//	if (((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z')))
//	{
//		printf("%c is an alphapet",x);
//	}
//	else
//	{
//		printf("%c is not an alphapet",x);
//
//	}

/////////////////////////////////////////////////////////////////




					/* EX6 */


//	unsigned int i,n,sum=0;
//	printf("Enter an integer: ");
//	fflush(stdout);fflush(stdin);
//	scanf("%d",&n);
//
//	for (i=0;i<=n;i++)
//	{
//		sum += i;
//	}
//	printf("Sum = %d",sum);

/////////////////////////////////////////////////////////////////



					/* EX7 */


//	int i,n,fact=1;
//	printf("Enter an integer: ");
//	fflush(stdout);fflush(stdin);
//	scanf("%d",&n);
//	if (n<0)
//	{
//		printf("\nError!!\nFactorial of negative numbers doesn't exist");
//	}
//	else if(n==0)
//	{
//		printf("\nFactorial of %d = 1",n);
//	}
//	else
//	{
//		for (i=n;i>=1;i--)
//		{
//			fact *= i;
//		}
//
//		printf("\nFactorial of %d = %d",n,fact);
//	}


/////////////////////////////////////////////////////////


//					/* EX8 */
//
//		char o;
//		float x,y ;
//		float res;
//		printf("enter 1st number");
//		fflush(stdout);
//		scanf(" %f",&x);
//
//		printf("enter 2nd number");
//		fflush(stdout);
//		scanf(" %f",&y);
//
//		printf("--------------\n");
//		fflush(stdout);
//		printf("enter + for addition\n");
//		fflush(stdout);
//		printf("enter - for subtraction \n");
//		fflush(stdout);
//		printf("enter * for multiplication\n");
//		fflush(stdout);
//		printf("enter / for devision\n");
//		fflush(stdout);
//		scanf(" %c",&o);
//
//
//		switch(o)
//		{
//			case '+' :
//			{
//
//				res = x+y;
//				break;
//			}
//			case '-' :
//			{
//				res = x-y;
//				break;
//			}
//			case'*':
//			{
//				res = x*y;
//				break;
//			}
//			case'/':
//			{
//				res = x/y;
//				break;
//			}
//
//			default:
//			{
//
//				printf("ERROR");
//
//			}
//		}
//
//		printf("The result is : %f\n",res);
//		fflush(stdout);

	return 0;
}





