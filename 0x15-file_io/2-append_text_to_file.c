#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a;
	int file;
	int value;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);
	for (a = 0; text_content[a] != '\0'; a++)
		value = write(file, text_content, a);
	if (value == -1)
		return (-1);
	close(file);
	return (1);
}
