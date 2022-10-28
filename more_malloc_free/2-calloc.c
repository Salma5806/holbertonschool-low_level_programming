#include "main.h"
#include <stdio.h>

/**
 * _calloc - print 0s into 2D grid
 * @nmemb: array num (width)
 * @size: size of ea array element (height)
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size
	arr = malloc(total);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		arr[i] = NULL;

	return (arr);
}
