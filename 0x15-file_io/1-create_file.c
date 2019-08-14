/**
 * create_file -  function that creates a file.
 * @filename: file's name.
 * @text_content: is a NULL terminated string to write to the file
 * Return: the actual number of letters it could read and print.
 */
#include "holberton.h"
int create_file(const char *filename, char *text_content)
{
	int fd, n_read = 0, n_write;

	if (filename)
	{
		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		if (fd == -1)
			return (-1);
		if (!text_content)
			return (1);
		while (text_content[n_read])
			n_read++;
		n_write = write(fd, text_content, n_read);

		close(fd);
		if (n_write != n_read)
			return (-1);
		return (1);
	}
	return (-1);

}
