#include "main.h"

/**
 * print_rev - prints a string, in reverse,followed by a new line.
 * @s: string in reverse.
 */
void print_rev(char *s)
{
	char *s = input;
	char *o = output;

	while(*s != '\0')
	{
		s++;
	}
	s--;

	while(s >= input)
	{
	*o = *s;
	s--;
	o++;
	}
	*o = '\0';
	_putchar("\n %s", s);
}
