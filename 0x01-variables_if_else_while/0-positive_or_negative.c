#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determine if a random number is positive, negative or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
		printf("%d id %s\n", n, "negative");
	}
	else if (n > 0)
	{
		printf("%d id %s\n", n, "positive");
	}
	else
	{
		printf("%d id %s\n", n, "zero");
	}
	return (0);
}
