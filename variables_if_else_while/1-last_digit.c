#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -print the last digit of the number 
 *
 * Return: Always (Success)
 */
int main(void)
{
	int n;
	int l;
	char strl[]= "last digit of";
	srand(time(0)0;
	l = n % 10;

	if (l > 5)
		printf("%s %d  is %d and is greater than 5\n", str, n, l);
	else if (l == 0)
		printf("%s %d is %d and is 0\n", str, n,l);
	else if (l < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, l);
	return(0);
}
