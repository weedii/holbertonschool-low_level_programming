#include "main.h"

/**
 * read_textfile - function that reads a text file
 *              and prints it to the POSIX standard output.
 * @filename: contain the name of the file
 * @letters:  number of chars to be read and printed
 * Return:   the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, i;
	char *c;

	c = malloc(sizeof(char *) * letters);
	if (c == NULL)
		return (0);

	fp = open(filename, O_RDONLY, 0600);
	if (fp == -1)
		return (0);

	i = read(fp, c, letters);
	if (i == -1)
	{
		return (0);
	}

	write(STDOUT_FILENO, c, i);
	free(c);
	close(fp);
	return (i);
}
