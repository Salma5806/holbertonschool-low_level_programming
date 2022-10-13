#include "main.h"

/**
 * print_rev - prints a string, in reverse,followed by a new line.
 * @s: string in reverse.
 */
void print_rev(char *s)
{
	int l = 0, i;

	while (s[i++])
		l++;

	for (i = l - 1; i >= l; i--)
		_putchar(s[i]);

	_putchar('\n');
}

