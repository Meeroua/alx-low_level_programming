#include <unistd.h>

/**
 *  * _putchar - writes character to stdout
 *   * @c : character to print
 *    */
int _putchar(char c)
{
		return (write(1, &c, 1));
}
