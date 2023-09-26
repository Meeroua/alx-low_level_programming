#include "main.h"
/**
 *  _puts - prints string folowed with new line
 *   @str: pointer to string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
