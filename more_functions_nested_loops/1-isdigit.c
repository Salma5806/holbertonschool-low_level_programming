#include "main.h"

/**
 * isdigit - Checks for a digit.
 * @c: The character cheker.
 *
 * Return: 1 if character is a digit, 0 otherwise.
 */
int_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
