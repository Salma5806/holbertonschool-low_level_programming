#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/*
* print _numbers - prints numbers
* @n: the number of integers passed to function
* @separator: the string to be printed between numbers
* @..: a variable number of numbers to be printed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list k;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(k, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(k);

}
