#include <stdio.h>

/**
* main - this is a function to print the name
* @argc: argc parameter
* @argv: an array of a command listed
* Return: 0 for success
*/
int main (int _attribute_((_unused_)) argc, char *argv[])
{
	printf("%s\n", *argv[0]);
		return (0);
}
