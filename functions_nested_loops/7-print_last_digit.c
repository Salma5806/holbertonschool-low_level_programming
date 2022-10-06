#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: last digit.
 *
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{

	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit_new = -1;

	_putcha(last_digit + '0');

		return (last_digit);
}
