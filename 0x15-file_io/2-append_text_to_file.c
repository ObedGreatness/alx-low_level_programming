#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: Name of the file.
 * @text_content: NULL terminated string
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, num_letters = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num_letters = 0; text_content[num_letters];)
			num_letters++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, num_letters);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
