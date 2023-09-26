#include <stdio.h>

/**
 *  main - prints all possible combinations of single-digit numbers
 *   Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 9; x++)
	{
		putchar(x + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(x + '0');
	putchar('\n');
	return (0);
}
