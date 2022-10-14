#include "main.h"
/**
 * _strncpy - function that concatenates two strings.
 * @n: is the pointer is the origin.
 * @dest: is the pointer is the destiny.
 * @src: is the pointer is the destiny.
 * Return: string.
 */

char *_strncpy(char *dest, char *src, int  n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = src_len; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
