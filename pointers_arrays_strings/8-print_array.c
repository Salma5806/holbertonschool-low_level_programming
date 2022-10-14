#include "main.h"
/**
 * print_array - Prints arrays.
 * @a: parameter pointer.
 * @n: number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int a, i, n;

	for (i = 0; i < n; i++)
		*a = i + 1;
		a++;
	printf("\n numbers [%d] = %d", i, numbers[i]);
}
