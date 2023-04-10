#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile-  reads a text file and prints it  to the POSIX standard output
 * @filename: pointer to the text file
 * @letters: number of letters to read and print
 * Returns : b - the number of bytes read and printed, 0 when filename is NULL or when function fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *per;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	per = malloc(sizeof(char) *letters);

	c = open(filename,O_RDONLY);
	a = read(c, per, letters);
	b = write(STDOUT_FILENO, per, a);

	if (c == -1)
		return (0);
	
	free(per);
	close(c);
	return (b);
}
