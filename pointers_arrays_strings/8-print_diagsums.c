# include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: The matrix of integers.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int b, s1 = 0, s2 = 0;

	for (b = 0; b < size; b++)
	{
		s1 += a[(size + 1) * b];
		s2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", s1, s2);
}
