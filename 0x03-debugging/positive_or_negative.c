#include "main.h"
#include <stdio.h>                                                                            

/**
 * function - test if number n is positive or negative.
 * @n: input number
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
}
