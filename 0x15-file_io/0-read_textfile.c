#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: Name of the file.
 * @letters: The number of letters printed
 * Return: Numbers of letters printed or ) on failure
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	close(o);
	free(buffer);

	return (w);
}
