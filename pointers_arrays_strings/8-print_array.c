#include "main.h"
/**
 * print_array - Prints arrays.
 * @a: parameter pointer.
 * @n: number of elements of the array to be printed.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		*a = i + 1;
		a++;
	{
	printf(", %d", a[i]);
	}
	ptintf("\n");
}
