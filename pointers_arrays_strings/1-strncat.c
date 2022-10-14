#include "main.h"
#include <string.h>
/**
 * char *_strncat - appends the src string to the dest string.
 * @dest: parameter to the buffer pointed.
 * @src: string pointed.
 * @n: 3rd prameter.
 * Return: string.
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
