#include <stdio.h>

/**
 *  main - Prints numbers of base 16 in lowercase
 *   Return: Always 0.
 */
int main(void)
{
	int b;
	char c;

	for (b = 0; b < 10; b++)
		putchar((b % 10) + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
