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
	unsigned int i ,j , k, k2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] != '\0')
	{
	i++;
	}

	j = 0;
	while (s2[i] != '\0')
	{
		j++
	}

	if (n < j)
		j = n;

	j += i;
	arr = malloc(sizeof(char *) * (j + 1));

	if (arr == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		arr[k] = s1[k];
	for (k2 = 0; k < j; k2++)
	{
		arr[k] = s2[k2];
		k++;
	}
	k++;
	arr[k] = '\0';
	return (arr);
}
