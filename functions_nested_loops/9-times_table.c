#include "main.h"

/**
 * time_table - prints the 9 times table ,starting with 0,
 *
 */
void times_table(void)
{
	int n,i,p;

	for (i=0; i<=9; i++)
	{
	_putchar('0');

	for (i = 1; i <= 9; i++);
	{
	_putchar(',');
	_putchar(' ');

	p = i * n;

	if (prod <= 9)
		_putchar(' ');
	else 
		_putchar((p / 10) + '0');

	_putchar((p % 10) + '0');
	}
	_putchar('\n')
	}
}
