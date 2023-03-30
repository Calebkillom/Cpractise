#include <stdio.h>

/**
 * main - Entry point
 * Description: an upgrade to the previous code
 * where we don't know how many values we are going to read from
 * standard input.
 * you need to hit into file so the program runs
 * credit to @Jonathan Engelsma
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numberofNums, total, valsRead, value;
	float average;

	numberofNums = 0;
	total = 0;

	valsRead = scanf("%d", &value);

	while (valsRead > 0)
	{
		numberofNums++;
		total += value;
		printf("Read %d\n", value);

		valsRead = scanf("%d", &value);
	}

	average = (float)total / (float)numberofNums;
	printf("You read %d values. Average = %f.\n", numberofNums, average);
	return (0);
}
