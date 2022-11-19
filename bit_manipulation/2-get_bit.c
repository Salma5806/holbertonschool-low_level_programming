#include <stdio.h>
#include "main.h"
/**
* get _bit - gets the value of a bit at a given
*@n: the bit
*@index: the index to get the value at - indices start at 0
* Return: if an error - -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int count = 0;

	while (n)
	{
		if (count == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		count++;
	}

	if (index > count && index < 63)
		return (0);

	return (-1);

}
