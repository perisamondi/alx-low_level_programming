#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file -    function that creates  file
 * @filenme: the file to be created
 * @text_content: the string to write in the file
 * return: 1 on success nd -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int x,t = 0;
	int len;


	if (filename == NULL)
		return (-1);
	
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

       	x = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t=write(x, text_content, len);
	
	if (x == -1 || t == -1)
		return (-1);
	close(x);
	return (1);
}
