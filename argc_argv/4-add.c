#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: rgument vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
    int i, s = 0, j;

    if (argc < 3)
        printf("0\n");

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (argv[i][j] > '9' || argv[i][j] < '0')
            {
                printf("Error\n");
                return (1);
            }
        }
        s += atoi(argv[i]);
    }
    printf("%d\n", s);
    return (0);
}
