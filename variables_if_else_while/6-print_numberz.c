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
		putchar((i % 10) + '0');
		i++;
}
	putchar('\n');

	return (0);
}