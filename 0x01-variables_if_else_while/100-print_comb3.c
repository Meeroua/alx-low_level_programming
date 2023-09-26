#include <stdio.h>
/**
 *  main - prints all possible different 
 *   combinations of two digits.
 *    Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;
	int n = 100;
	int m = 10;
	int o = 89;

	a = 0;
	while (a < n)
	{
		b = a % m;
		c = a / m;
		if (c < b)
		{
			putchar(c + '0');
			putchar(b + '0');
			if (a < o)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
