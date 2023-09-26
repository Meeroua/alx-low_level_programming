/**
 *  _strcpy - copies string
 *   @dest: pointerto the buffer
 *    @src: string
 *     Return: destination pointer
 */
void *_strcpy(char *dest, char *src)
{
	int length, i;

	length = 0;
	while (src[length] != '\0')
		length++;
	for (i = 0; i < length; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
