#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print alphabets except q and e'
 * Return: 0
 * */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		if (n == 101 || n == 113)
		{
			n++;
			continue;
		}
		putchar(n);
		n++;
	}
	putchart('\n');
	return (0);
}
