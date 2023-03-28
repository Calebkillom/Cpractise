#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints
 * all the numbers of base 16
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (y = 97; y < 103; y++)
	{
		putchar(y);
	}

	putchar('\n');
	return (0);
}
