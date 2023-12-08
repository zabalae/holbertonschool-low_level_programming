#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	size_t len, bytes_written;
	FILE *file = fopen(filename, "w");

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
		{
			len++;
		}

		bytes_written = fwrite(text_content, sizeof(char), len, file);

		if (bytes_written != len)
		{
			fclose(file);
			return (-1);
		}
	}

	fclose(file);
	return(1);
	
}
