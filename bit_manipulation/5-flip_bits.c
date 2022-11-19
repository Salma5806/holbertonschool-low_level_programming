#include <stdlib.h>
#include "main.h"

/**
  * flip_bits -  counts the number of bits
  * @n: number
  * @m: number to flip n to
  *
  * Return:  the necessary number of bits to flip to get from n to m
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = 0, count = 0;

	xor = n ^ m;
	while (xor)
	{
		if (xor & 1)
			count++;

		xor >>= 1;
	}

	return (count);
}
