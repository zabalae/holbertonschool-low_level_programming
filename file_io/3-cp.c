#include "main.h"

/**
 * handle_file_errors - handles error conditions related to file
 * operations
 * @fd1: file descriptor of the source file
 * @fd2: file descriptor of the destination file
 * @args: an array of strings containing the program's arguments
 * Return: void
 */

void handle_file_errors(int fd1, int fd2, char *args[])
{
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", args[1]);
		exit(98);
	}

	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", args[2]);
		exit(99);
	}
}

/**
 * main - main function
 * @argc: holds the number of arguments passed
 * @argv: array of strings containing the arguments
 */

int main(int argc, char *argv[])
{
	int src_fd, dest_fd, close_result;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
			return (97);
	}

	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	handle_file_errors(src_fd, dest_fd, argv);

	do {
		bytes_read = read(src_fd, buffer, 1024);
		if (bytes_read == -1)
			handle_file_errors(-1, 0, argv);

		bytes_written = write(dest_fd, buffer, bytes_read);
		if (bytes_written == -1)
			handle_file_errors(0, -1, argv);

	} while (bytes_read == 1024);

	close_result = close(src_fd);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd);
		exit(100);
	}

	close_result = close(dest_fd);
	if (close_result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}

	return (0);
}
