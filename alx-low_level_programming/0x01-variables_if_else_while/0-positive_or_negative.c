#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- entry point
 * Description: 'this program assigns a random number to the variable n'
 * 'each time it's executed and depending on the the number'
 * 'it returns either positive, zero or a negative.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(" %d is positive.\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero.\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	return (0);
}
