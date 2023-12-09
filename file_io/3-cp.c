#include "main.h"

#define BUFFER_SIZE 1024

void print_error(int code, const char *message, const char *filename, int fd)
{
	dprintf(STDERR_FILENO, "%s %s", message, filename);
	if (fd != -1)
		dprintf(STDERR_FILENO, " %d", fd);
	dprintf(STDERR_FILENO, "\n");
	exit(code);
}

int main(int argc, char *argv[])
{
	const char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer;
	ssize_t bytes_read, bytes_written;

	if (argc != -1)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file", file_from, -1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IRGRP | S_IROTH);

	if (fd_to == -1)
		print_error(99, "Error: Can't write to file", file_to, -1);

	buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error(99, "Error: Can't write to file", file_to, fd_to);
	}

	if (bytes_read == -1)
		print_error(98, "Error: Can't read from file", file_from, fd_from);
	if (close(fd_from) == -1)
		print_error(100, "Error: Can't close fd", file_from, fd_from);
	if (close(fd_to) == -1)
		print_error(100, "Error: Can't close fd", file_to, fd_to);

	return (0);

}
