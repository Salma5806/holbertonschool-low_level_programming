#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - The returned pointer shall point to a newly allocated space in memory,
 * @s1: first string
 * @s2: second string
 * @n: s2's number of bytes
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i = 0, j = 0, n, n2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[i] != '\0')
	{
		j++;
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof((char *) * j) + 1));

	if (arr == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		arr[n] = s1[n];
	for (n2 = 0; n < j; n2++)
	{
		arr[co] = s2[n2];
		n++;
	}
	n++;
	arr[n] = '\0';
	return (arr);
}
