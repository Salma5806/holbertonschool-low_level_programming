#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the source of file
* @text_content: added content
*
* Return: 1 if the file exists -1 if the fails does not exist
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rwr, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++);
		rwr = write(fd, text_content, i);
		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
