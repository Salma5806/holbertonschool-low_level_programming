#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @n: the number to be printed.
 */
void print_triangle(int size)
{
	int l,d;

	if (size > 0)
	{
		for (l = 1; l < size; l++)
		{
			for (i = size - l; i > 0; i++)
				_putchar(' ');

			for (i = 0; i < l; i++)
				_putchar('#');

			if (l == size)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}

	}

	_putchar('\n');
}
