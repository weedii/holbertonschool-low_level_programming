#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *fp;
    char c;
    size_t i = 0, j = 0;

    if (filename)
    {
        fp = fopen(filename, "r");

        while ((c = fgetc(fp)) && i < letters)
        {
            if (c != EOF)
            {
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