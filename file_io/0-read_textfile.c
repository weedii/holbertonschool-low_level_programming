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
	int fp;
	char *buf;
	int b;

	buf = malloc(sizeof(char *) * letters);
	if (buf == NULL)
		return (0);
	fp = open(filename, O_RDONLY, 0600);
	if (fp == -1)
	{
		return (0);
	}
	b = read(fp, buf, letters);
	if (b == -1)
	{
		return (0);
	}

	write(STDOUT_FILENO, buf, b);
	free(buf);
	close(fp);

	return (b);
}
