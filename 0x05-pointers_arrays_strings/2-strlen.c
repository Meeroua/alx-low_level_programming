/**
 *  _strlen - function that calculates length of a string
 *   @s: string address
 *    Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
