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
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
