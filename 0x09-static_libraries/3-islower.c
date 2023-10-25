#include "main.h"
/**
 ** _islower - checks for lowercase character
 ** Description: 0x02. C - task 3
 ** @c: input character
 ** Return: 1 if c is lowercase; 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
