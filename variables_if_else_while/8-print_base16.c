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

	for (i = 0 ; i <= 10 ; i++)
		putchar((i % 10) + '1');

	for (ch = 'a' ; ch <= 'f' ; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
