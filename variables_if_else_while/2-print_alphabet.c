#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Printsy the alphabet in lowercase
 *
 *
 * Return: Always 0.
 */
int main()
{
    char ch;

    printf("Alphabets from a - z are: \n");
    for(ch='a'; ch<='z'; ch++)
    {
        putchar("%c\n", ch);
    }

    return 0;
}
