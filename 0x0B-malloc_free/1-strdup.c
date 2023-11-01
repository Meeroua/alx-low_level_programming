#include "main.h"
#include <stdlib.h>
/**
 *  _strdup - returns a pointer to a new string
 *   which is a duplicate of the string str.
 *    @str: string.
 *
 *     Return: pointer to an array of chars.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	size = i + 1;

	dup = (char *)malloc(sizeof(char) * size);

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		dup[i] = str[i];

	return (dup);
}
