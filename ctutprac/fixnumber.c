#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that reads a fixed number of integer values from
 * std input and compute their average
 * credit to @Jonathan Engelsma
 * Return: Always (0)
 */

int main(void)
{
	int i, numberofNums, total, value;
	float average;

	numberofNums = 0;
	total = 0;

	printf("How many numbers are to be read?");
	scanf("%d", &numberofNums);

	for (i = 0; i < numberofNums; i++)
	{
		scanf("%d", &value);
		total += value;
		printf("Read %d\n", value);
	}

	average = (float)total / (float)numberofNums;

	printf("You read %d values and average = %f.\n", numberofNums, average);
	return (0);
}
