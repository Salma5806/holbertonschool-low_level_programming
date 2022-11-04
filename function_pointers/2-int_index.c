#include "function_pointers.h"
#include <stdio.h>
/*
*
*
*
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array = NULL && size <= 0 && cmp = NULL);
		return -1;

	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i] != 0;))
				return (i);
		}
	}
}
