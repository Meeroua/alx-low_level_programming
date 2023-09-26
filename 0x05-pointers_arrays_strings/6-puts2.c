#include "main.h"
/**
 *  puts2 -  prints every other character of a string
 *   @str: string address
 */
void puts2(char *str)
{
	int n, i;
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
