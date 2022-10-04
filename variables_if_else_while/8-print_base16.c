#include <stdio.h>

/**
 * main - Prints the all the number of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	char ch;

	for (i = 48 ; i <= 57 ; i++)
		putchar((i % 10) + '0');

	for(ch = 97; ch <= 102 ; ch++);
		putchar(ch);

	putchar('\n');

	return (0);
}
