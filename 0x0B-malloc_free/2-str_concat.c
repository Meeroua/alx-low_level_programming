#include "main.h"
#include <stdlib.h>

/**
 *  str_concat - concatenates two strings.
 *   @s1: 1st string.
 *    @s2: 2nd string.
 *
 *     Return: pointer to an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i, j, n1, n2, n3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	n1 = i + 1;

	for (i = 0; s2[i] != '\0'; i++)
		;
	n2 = i + 1;

	n3 = n1 + n2 - 1;

	result = malloc(sizeof(char) * n3);

	if (result == NULL)
	{
		free(result);
		return (NULL);
	}

	for (i = 0; i < n1 - 1; i++)
		result[i] = s1[i];

	for (j = 0; j <= n3; j++, i++)
		result[i] = s2[j];

	return (result);
}
