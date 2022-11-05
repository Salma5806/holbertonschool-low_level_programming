#include "variadic_functions.h"
#include < stdarg.h>
/*
*
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list k;

	if (separator == NULL && n == 0 )
		return (0);

	va_start(k, n);

	for (i = 1; i < n; i++)
	{
		printf("%d\n", va_arg(k, int);

		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(k);

}
