#include "main.h"
/**
 * _strncpy - function that concatenates two strings.
 * @n: is the pointer is the origin.
 * @dest: is the pointer is the destiny.
 * @src: is the pointer is the destiny.
 * Return: d.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (i < n && src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
		dest[i] = '\0';
	}

	return (dest);
}
