#include "main.h"

/**
 * prints tha alphabet in lowercase
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void);
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');

	return (0);
}
