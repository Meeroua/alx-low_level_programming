#include "main.h"

/**
 *  _strlen - calculates length of a string.
 *   @s: string
 *    Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 *  palindrome - checks if a string is a palindrome
 *   @s: string
 *    @i: index
 *     @j: index
 *      Return: 1 if s is a palindrome, 0 otherwise.
 */
int palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);
	if (*(s + i) != *(s + j))
		return (0);
	return (palindrome(s, i + 1, j - 1));
}

/**
 *  is_palindrome - checks if a string is a palindrome
 *   @s: string.
 *    Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome(s, 0, _strlen(s) - 1));
}
