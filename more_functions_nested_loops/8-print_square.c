#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: the size of the square.
 */
void print_square(int size)
{
	int l, d;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (d = 0; d < size; d++)
				_putchar('#');

			if (l == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
