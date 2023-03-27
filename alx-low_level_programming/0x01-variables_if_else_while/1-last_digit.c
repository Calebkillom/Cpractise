#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: program that assigns random number to variable n
 * prints out the number with its last digit followed by some
 * statements
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	last_dig = n % 10;
	printf("Last digit of %d is %d ", n, last_dig);

	if (last_dig > 5)
	{
		printf("and is greater than 5 \n");
	}
	else if (last_dig == 0)
	{
		printf("and is zero \n");
	}
	else if (last_dig < 6 && last_dig != 0)
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
