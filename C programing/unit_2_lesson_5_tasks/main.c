#include <stdio.h>
#include <string.h>


/* ------------------Ex1-----------------
int isPrime(int num);
void printPrimes(int start, int end);


int main() 
{
    int start, end;

    printf("Enter the start of the interval: ");
    scanf("%d", &start);

    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: ", start, end);
    printPrimes(start, end);

    return 0;
}


int isPrime(int num) 
{
    if (num <= 1) 
	{
        return 0;
    }
    for (int i = 2; i * i <= num; i++) 
	{
        if (num % i == 0) 
		{
            return 0;
        }
    }
    return 1;
}

void printPrimes(int start, int end)
 {
    for (int i = start; i <= end; i++) 
	{
        if (isPrime(i)) 
		{
            printf("%d ", i);
        }
    }
    printf("\n");
}
*/


//------------------Ex2-----------------
/*

long factorial(int n)
 {
    if (n == 0) 
	{
        return 1;
    } else 
	{
        return n * factorial(n - 1);
    }
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factorial of %d = %ld\n", num, factorial(num));

    return 0;
}


*/


//------------------Ex3-----------------
/*
void reverseString(char str[], int start, int end) 
{
    if (start >= end)
	{
        return;
    }

    
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

   
    reverseString(str, start + 1, end - 1);
}

int main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s",str);

    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n') 
	{
        str[--len] = '\0';
    }

    reverseString(str, 0, len - 1);

    printf("Reversed string: %s\n", str);

    return 0;
}

*/


/* ------------------Ex4-----------------

double power(double base, int exponent) 
{
    if (exponent == 0)
	{
        return 1;
    } 
	
	else if (exponent < 0)
	{
        return 1 / power(base, -exponent);
    }

	else 
	{
        return base * power(base, exponent - 1);
    }
}

int main() {
    double base;
    int exponent;

    printf("Enter a base number: ");
    scanf("%lf", &base);

    printf("Enter an exponent: ");
    scanf("%d", &exponent);

    printf("%.2lf^%d = %.2lf\n", base, exponent, power(base, exponent));

    return 0;
}
*/