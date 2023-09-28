#include "main.h"

/**
 *  factorial -  returns factorial of n
 *   @n: number
 *    Return: n!
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
