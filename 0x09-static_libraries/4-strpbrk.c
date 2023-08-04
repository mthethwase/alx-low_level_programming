#include "main.h"
/**
 * _strbrk - program entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			return (s);
		}
	s++;
	}

	return ('\0');
}
