#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	FILE *file_check;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		file_check = fopen(filename, "r");
		if (file_check != NULL)
		{
			fclose(file_check);
			return (1);
		}
		else
		{
			return (-1);
		}
	}

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	while (*text_content != '\0')
	{
		_putchar(*text_content);
		fputc(*text_content++, file);
	}

	fclose(file);
	return (1);

}
