#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/*
*
*
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list k;
	va_star(k, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(k, int));

		if (str[i] != NULL)
			printf("%s", str[i]);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(k);
}
