#include "main.h"
/**
 * _isupper - checks for a digit
 * Description: 0x04. C - task 1
 * @c: input character
 * Return: 1 if c is a digit; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
