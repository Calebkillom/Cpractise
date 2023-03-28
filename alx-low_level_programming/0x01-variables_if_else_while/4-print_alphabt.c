#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry Point
 * Description: program that prints alphabet in
 * lowercase followed by a new line
 * however it prints all the letters
 * except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphab, small_lett;

	for (alphab = 'a'; alphab <= 'z'; alphab++)
	{
		small_lett = tolower(alphab);

		if (small_lett == 'e' || small_lett == 'q')
		{
			putchar('\0');
		}
		else
		{
			putchar(small_lett);
		}
	}
	putchar('\n');
	return (0);
}
