#include "main.h"

/**
 * print_jack_bauer - prints every minute of the day of jack Bauer.
 * @n: prints minute.
 *
 * Return: .
 */
void jack_bauer(void)
{

	int hour, minute;

	for (hour = 1; hour <= 24; hour++)
	{

		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
} 
