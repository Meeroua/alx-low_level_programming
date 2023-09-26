#include <stdio.h>

/**
* main -  prints the largest prime factor of the number 612852475143
* Return: Always 0.
*/
int main(void)
{
long int n = 612852475143;
long int largestFactor = -1;
long int i;

/*Divide n by 2 until it's odd*/
while (n % 2 == 0)
{
largestFactor = 2;
n /= 2;
}

/*Continue checking odd factors*/
for (i = 3; i <= n; i += 2)
{
while (n % i == 0)
{
largestFactor = i;
n /= i;
}
}

/*If n is a prime number greater than 2, it is the largest prime factor*/
if (n > 2)
{
largestFactor = n;
}

printf("%ld\n", largestFactor);

return (0);
}
