#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
__except( putchar((ch = 'q') && (ch = 'e'))

	putchar('\n');

	return (0);
}
