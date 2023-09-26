#include <stdio.h>
/**
 *  main - prints all possible different combinations of three digits.
 *   Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int n = 1000;

	for (a = 0; a < n; a++)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 10;
		if (b < c && c < d)
		{
			putchar(b + '0');
			putchar(c + '0');
			putchar(d + '0');
			if (a < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
