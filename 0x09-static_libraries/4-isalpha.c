#include "main.h"
/**
 * _isalpha - program checks for alphabetic character
 * @s: the character will be checked
 * Return: 1 if c is a letter and return 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'));
}
