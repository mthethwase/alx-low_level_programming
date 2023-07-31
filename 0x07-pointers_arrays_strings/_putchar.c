#include "main.h"
#include <stdio.h>

/**
 * _putchar - write the characher c tO stdout
 * @c: The characher to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
