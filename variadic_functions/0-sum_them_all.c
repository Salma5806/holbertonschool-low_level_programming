#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/*
* sum_them_all : returns the sum of all the numbers
* @n : amount of the argument
* Return: sum of all numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list k;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(k, n);

	for (i = 0; i < n; i++)
		sum += va_arg(k, int);
	va_end(k);

	return (sum);
}
