#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* read_file - reads a text file and prints it to the POSIX standard output.
* @filename: the souce file
* @letters: number of letters to reads and prints
* Return: letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (buff == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	close(fd);
	return (readed);

}
