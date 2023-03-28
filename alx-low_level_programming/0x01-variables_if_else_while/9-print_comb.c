#include <stdio.h>

/**
 * main - Entry Point
 * Description: A program that prints all
 * possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');

		if (n == 9)
		{
			continue;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
