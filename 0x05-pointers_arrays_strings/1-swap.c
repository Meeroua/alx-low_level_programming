#include "main.h"
/**
 *  swap_int - function that swaps the values of two variables
 *   @a: address of var 1
 *    @b: address of var 1
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
