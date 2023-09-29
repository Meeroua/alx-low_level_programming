#include "main.h"

/**
 *  find_sqrt - Helper function to recursively find the square root.
 *   @n: input number
 *    @guess: current guess for the square root.
 *     Return: The natural square root if found, -1 otherwise.
 */
int find_sqrt(int n, int guess)
{
	if ((guess * guess) == n)
		return (guess);  /* Found the square root */

	else if (guess * guess < n)
		/* If the square is smaller, increase the guess and continue */
		return (find_sqrt(n, guess + 1));

	else
		/* If the square is larger, there's no natural square root */
		return (-1);
}

/**
 *  _sqrt_recursion - Returns the natural square root of a number.
 *   @n: input number
 *    Return: The natural square root if found, -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);  /* Negative numbers don't have natural square roots */

	else if (n == 0 || n == 1)
		return (n);   /* The square root of 0 or 1 is the number itself */

	else
		return (find_sqrt(n, 1));  /* Start with a guess of 1 */
}
