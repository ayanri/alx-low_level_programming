#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: const char data type
 * @letters: letters to print
 *
 * Return: numbers read or printed else, 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t reads;
	ssize_t prints;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buffer);
		return (0);
	}
	reads = read(file, buffer, letters);
	if (reads == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	close(file);
	prints = write(STDOUT_FILENO, buffer, reads);
	if (prints == -1)
	{
		free(buffer);
		return (0);
	}
	if (prints != reads)
		return (0);
	return (reads);
}
