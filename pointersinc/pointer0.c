#include <stdio.h>

/**
 * Increment - function to add
 * @a: the number to be added
 * main - Entry point
 * Description: playground for playing with pointers and
 * mastering the concept.
 * credit to @mycodeschool
 * Return: Always 0 (Success)
 */

void Increment(int a)
{
	a = a + 1;
	printf("Address of variable a in Increment function is %p \n",
			(void *)&a);
}

int main(void)
{
	int a;

	a = 10;

	Increment(a);
	printf("a = %d ", a);

	printf("Address of variable a in Increment function is %p \n",
			(void *)&a);

	return (0);
}
