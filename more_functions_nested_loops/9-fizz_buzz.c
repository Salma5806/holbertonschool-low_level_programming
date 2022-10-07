#include <stdio.h>

/**
 * prints the numbers from 1 100.
 */
void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (((i%3) == 0)&& ((i %5 )==0))
{
			printf("FizzBuzz");
}
		else if ((i % 3) == 0 )
{
			printf("Fizz");
}
		else if ((i % 5) == 0)
{
			printf("Buzz");
}

	}
	printf("\n");
}
