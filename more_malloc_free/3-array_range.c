#include "main.h"
#include <stdio.h>
/**
 * array_range - create an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len, cumul = max -min;

	if (min > max)
		return (NULL);

	for (len = 0; len < cumul; len++)
		;

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
