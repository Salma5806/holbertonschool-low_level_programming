
#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * char *_strcat - appends the src string to the dest string.
 * @dest: destination of string.
 * @src: source of string.
 * Return:a pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return dest;
}
