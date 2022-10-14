#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - copies the string pointed.
 * @dest: parameter to the buffer pointed.
 * @src: string pointed.
 * Return: a pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (dest[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}

	return (dest);
}
