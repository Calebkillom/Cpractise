#include <stdio.h>

/**
 * main - Entry Point
 * Description: program that prints lowercase
 * alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab;

	for (alphab = 'z'; alphab >= 'a'; alphab--)
	{
		putchar(alphab);
	}

	putchar('\n');
	return (0);
}
