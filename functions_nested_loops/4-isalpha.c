#include "main.h"

/**
 * _isalpha - Checks for alphabetics characters.
 * @c: The character cheker.
 *
 * Return: 1 if character is lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return(0);
}
}
