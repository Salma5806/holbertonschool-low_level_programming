#include "main.h"

/**
 * void _puts - prints a string.
 * @str: the string.
 */
void _puts(char *str);
{
	int index = 0;
	while(*str != '\0')
	{
		_putchar(*str[index]);
		index++
	}
	_putchar('\n');
}
