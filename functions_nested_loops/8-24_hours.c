#include "main.h"

/**
 * print_jack_bauer - prints every minute of the day of jack Bauer.
 * @n: prints minute.
 *
 * Return: .
 */
void jack_bauer(void)
{

	time_t seconds;
	struct tm *timeStruct;

	seconds = time(Null);

	timeStruct = localtime(&seconds);
	    _putchar("Current time : %d:%d:%d\n", timeStruct->tm_hour, timeStruct->tm_min, timeStruct->tm_sec);
}
