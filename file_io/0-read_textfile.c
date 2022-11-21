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
	FILE *fp;
	char c;
	size_t i = 0, j = 0;

	if (filename)
	{
		fp = fopen(filename, "r");

		if (fp == NULL)
			return (0);

		while ((c = fgetc(fp)) && i < letters)
		{
			if (c != EOF)
			{
				fprintf(stderr, "[stderr]: ");
				putchar(c);
				j++;
			}
			i++;
		}
		fclose(fp);
		return (j);
	}
	return (0);
}
