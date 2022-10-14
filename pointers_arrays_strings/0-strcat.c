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
	int i, len1, len2;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	printf("%s", dest);
	}
	return dest;

}
