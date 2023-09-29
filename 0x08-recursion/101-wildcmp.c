#include "main.h"

/**
 *  wildcmp - Compares two strings
 *   @s1: 1st string.
 *    @s2: 2nd string (can contain wildcard '*').
 *
 *     Return: 1 if the strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* If the current characters match or s2 has a wildcard '*' */
	if (*s2 == '*' || *s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1) || wildcmp(s1, s2 + 1)
				|| wildcmp(s1 + 1, s2));
	/**
	 *  exploring all possible ways in which the '*' in s2
	 *   can match characters in s1.
	 */

	return (0);  /* strings are not identical */
}
