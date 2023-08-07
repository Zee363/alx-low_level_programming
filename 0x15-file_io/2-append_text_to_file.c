#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: string to be added at the end of the file
 * Return: if it fails or filename is NULL - -1
 *	if the file does not exist the user lacks write permissions - -1
 *	if otherwise - 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int p, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	w = write(p, text_content, len);

	if (p == -1 || w == -1)
		return (-1);

	close(p);

	return (1);
}
