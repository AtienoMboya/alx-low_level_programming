#include "main.h"
/**
 * read_textfile - reads a text file and prints to POSIX
 * @filename: pointer to the name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 *	if file cannot be opened, NULL, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, 0_RDONLY);
	if (o == -1)
	{
		return (0);
	}
	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		close(o);
		return (0);
	}

	close(o);
	return (r);
}
