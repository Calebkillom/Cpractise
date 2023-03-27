#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: program that prints the alphabet
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab, small_lett;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		small_lett = tolower(alphab);
		putchar(small_lett);
	}

	printf("\n");

	return (0);
}
