#include "main.h"
/**
 * _isupper - check if uppercase letters
 * @c: char to check
 *
 * Return: if uppercase 1, else return 0
 */
int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
