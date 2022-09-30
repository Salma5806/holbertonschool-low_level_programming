#include <stdio.h> 

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
 char charType;
 int intType;
 long int longinttype;
 long long int doubellongint;
 float floatType;
 
 // sizeof evaluates the size of a variable
 printf("Size of a char: %zu byte(s)\n", sizeof(charType));
 printf("Size of an int: %zu byte(s)\n", sizeof(intType));
 printf("Size of a long int: %zu byte(s)\n", sizeof(longinttype));
 printf("Size of a long long int: %zu byte(s)\n", sizeof(doubellongint));
 printf("Size of a float: %zu byte(s)\n", sizeof(floatType))

    return (0);
}
