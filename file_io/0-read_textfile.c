#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = fopen(filename, O_RDONLY, 0600);
	if (fd == NULL)
		return (0);

	readed = fread(fd, buff, letters);
	fwrite(STDOUT_FILENO, buff, readed);

	close(fd);
	return (readed);
}
