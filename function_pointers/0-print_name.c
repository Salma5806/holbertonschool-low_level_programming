#include "function_pointers.h"
#include <stdio.h>

/*
*
*
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
    {
        f(name);
    }
}

void print_name_uppercase(char *name)
{
	unsigned int i = 0;

	while (name[i])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
		{
			putchar(name[i] + 'A' - 'a');
		}
		else
		{
			putchar(name[i]);
		}
	i++;
	}
}
void print_name_is(char *name)
{
	printf("%s", name);
}

int main()
{
	print_name("%s\n" , print_name_is);
	print_name("%s\n", print_name_uppercase);
	printf("\n");

	return 0;
}
