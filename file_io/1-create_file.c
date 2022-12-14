#include "main.h"
#include <stdio.h>

/**
* create_file - creates a file
* @filename : the source of file.
* @text_content: content writed in the file
*
* Return : 1 it it success, -1 if it fails
*/
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	int rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	for (i = 0; text_content[i]; i++);

	rwr = write(fd, text_content, i);
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}
