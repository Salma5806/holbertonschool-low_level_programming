#include <stdio.h>

/**
 * main - Prints the all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
{
		printf("%d", i);
		i++;
}
	printf('\n');

	return (0);
}
