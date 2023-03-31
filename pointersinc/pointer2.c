#include <stdio.h>

/**
 * main - Entry point
 * Description: pointers and array practise
 * the program firsts deals with how to print an array
 * then it will continue working with pointers and arrays
 * to see how arrays work with pointers
 * credit to the concepts goes to @mycodeschool
 * Return: Always 0 (Success)
 */

int main(void)
{
	int A[5] = {2, 4, 5, 8, 1};
	int i;
	int *p;
	int arraylength;

	arraylength = sizeof(A) / sizeof(A[0]);

	/* THIS SECTION IS HOW WE PRINT AN ARRAY*/

	for (i = 0; i < arraylength; i++)
	{
		printf("%d", A[i]);
	}
	printf("\n");

	/* pointers and arrays */
	p = &A[0];
	printf("p is %p \n", (void *) p);
	printf("*p is %d \n", *p);
	printf("p+1 is %p \n", (void *) (p + 1));
	printf("*(p+1) is %d \n", *(p + 1));

	return (0);
}
