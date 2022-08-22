#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int a = 0;
	int value = 0;
	int file = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + a) != '\0')
		{
			a++;
		}
		value = write(file, text_content, a);
	}
	if (value == -1 && value != a)
		return (-1);
	return (1);
}
