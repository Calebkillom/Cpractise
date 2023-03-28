#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: program that prints the alphabet
 * in lowercase, and then in uppercase,
 * followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab, small_lett, big_alpha;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		small_lett = tolower(alphab);
		putchar(small_lett);
	}
	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		big_alpha = toupper(alphab);
		putchar(big_alpha);
	}

	putchar('\n');

	return (0);
}
