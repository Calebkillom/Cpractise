#include <stdio.h>

/**
 * Increment - add function
 * @p: an argument which is pointed to integer
 */

void Increment(int *p)
{
	*p = (*p) + 1;
}

/**
 * main - Entry point
 * Description: pointer as function argument example
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	a = 10;

	Increment(&a);
	printf("a = %d\n", a);
	return (0);
}
