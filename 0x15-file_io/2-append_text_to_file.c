#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file -   appends text at the end of a file.
 * @filename: pointer to the name of the file
 * @text_content: pointer  to the string to be appended
 * Return: 1 on success / -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, t;
	int len;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	x = open(filename,O_WRONLY | O_APPEND);
	t = write(x, text_content, len);

	if (x == -1 ||  t == -1)
		return (-1);
	close(x);
	return (1);
}
