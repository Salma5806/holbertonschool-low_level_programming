#include "main.h"

/**
 * print_alphabet - prints 10 times the alphabet in lowercase, followed by a new line.
 */
void print_alphabet_x10(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar("%c * 10", ch);

	_putchar('\n');
}
