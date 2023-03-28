#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints all
 * single digit numbers of base 10
 * starting from 0 followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	int sing_dig;

	for (sing_dig = 0; sing_dig < 10; sing_dig++)
	{
		printf("%d", sing_dig);
	}

	printf("\n");
	return (0);
}
