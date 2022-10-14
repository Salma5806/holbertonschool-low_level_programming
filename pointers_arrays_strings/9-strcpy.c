#include "main.h"
#include <stdio.h>
/**
 * char *_strcpy - copies the string pointed.
 * @dest: parameter to the buffer pointed.
 * @src: string pointed.
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;
	while (dest[c] != '\0')
		c++;
		dest++;

	printf("%c", dest[c]);
	printf("\n");
	printf("%c", dest[c]);

}
