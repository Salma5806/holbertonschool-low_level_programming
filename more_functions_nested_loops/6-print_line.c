#include "main.h"

/**
 * print_line - prints draws a straight line in the terminal.
 */
void print_line(int n)
{
	int n,s;

	if (n > 0)
	{
		for(s = 0; s < n; s++)
		_putchar('_');

	}

	_putchar('\n');
}
