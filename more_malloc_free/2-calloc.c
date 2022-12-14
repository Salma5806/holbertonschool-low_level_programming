#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - print 0s into 2D grid
 * @nmemb: array num (width)
 * @size: size of ea array element (height)
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i, total = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(total);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		arr[i] = 0;

	return (arr);
}
