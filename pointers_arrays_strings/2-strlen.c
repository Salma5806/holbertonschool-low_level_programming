#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer of string.
 *
 * Return: the length of @s.
 */
int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
	x++;
	s++;
	}

	return (x);
}
