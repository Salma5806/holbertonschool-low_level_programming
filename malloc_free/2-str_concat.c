#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _strlen - count and returns string length
* @s: that s the string
*
* Return : the length
*/
int _strlen(char *s)
{
	int count = 0;

	if (!*s)
		return (0);

	while (*s)
	{
		count++;
		s++;
	}
	return (count);
}

/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: pointer to cat string
*/
char *str_concat(char *s1, char *s2)
{
	char *new;
	unsigned int i;
	unsigned int j;
	int total = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	total += _strlen(s1) + strlen(s2);
	new = malloc((total * sizeof(char)) + 1);

	if (new == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		new[i] = s2[j];
	}
	new[i] = '\0';
	return (new);
}
