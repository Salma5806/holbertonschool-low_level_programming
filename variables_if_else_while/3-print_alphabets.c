#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch;
	printf("Enter u to display uppercase alphabets.\n");
	printf("Enter l to display lowercase alphabets.\n");
	getchar("%ch , &ch)

	if (ch == 'U' || ch == 'u')
{

		for (ch = 'A'; ch <= 'Z'; ++ch)
			putchar("%ch" , ch);
}
	else if ( c == 'L' || c == 'l')
{
		for (ch == 'a'; c <= 'z'; ++ch)
			putchar ("%ch" , c);
}

	return (0);
}
