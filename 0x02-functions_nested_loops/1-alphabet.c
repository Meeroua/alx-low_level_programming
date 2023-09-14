#include "main.h"
/**
 ** print_alphabet - function that prints the alphabet
 ** Description: 0x02. C - task 2
 ** Return: alphabet
 */
void print_alphabet(void)
{
    	char c;
    	c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
