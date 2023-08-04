#include <unistd.h>

/**
 * _putchar - writes the characher c to stdout
 * @c: The characher to print
 *
 * Return: On success
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
