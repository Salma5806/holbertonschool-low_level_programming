#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*
* print_strings - prints strings
* @ separator: string to be printed between the string
* @n : number of string passed to the function
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list k;

	va_start(k, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(k, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(k);
}
