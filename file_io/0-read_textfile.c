#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, o, w, total = 0;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		free(buffer);
		return 0;
	}

	while ((r = read(o, buffer, letters)) > 0)
	{
		w = write(STDOUT_FILENO, buffer, r);
		if (w == -1 || w != r)
		{
			free(buffer);
			close(o);
			return (total);
		}
		total += w;
	}

	free(buffer);
	close(o);
	return (total);
}
