/**
 * read_textfile - function that reads a text file and prints it
 *                  to the POSIX standard output.
 * @filename: file's name.
 * @letters: amount of letters to be printed.
 * Return: the actual number of letters it could read and print.
 */
#include "holberton.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	int fd, n_read, n_write;

	if (!filename)
		return (0);
	p = malloc(letters);

	if (p)
	{
		fd = open(filename, O_RDONLY);

		if (fd == -1)
			return (0);
		n_read = read(fd, p, letters);
		n_write = write(1, p, n_read);

		if (n_write != n_read)
			goto end;
		return (n_write);
	}
end:
	close(fd);
	free(p);
	return (0);

}
