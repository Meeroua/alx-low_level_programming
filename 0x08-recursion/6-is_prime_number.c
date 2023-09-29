#include "main.h"

/**
 *  check_prime - checks if the input is a prime number
 *   @n: input number
 *    @i: current guess for a factor
 *     Return: 1 if the input is a prime number, 0 otherwise.
 */
int check_prime(int n, int i)
{
	if (i > n / 2)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 *  is_prime_number - checks if the input is a prime number
 *   @n: input number
 *    Return: 1 if the input is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	return (check_prime(n, 2));
}
