#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: rgument vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
    int rest = 0, n;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }

    n = atoi(argv[1]);

    while (n > 0)
    {
        if (n >= 25)
            n -= 25;
        else if (n >= 10)
            n -= 10;
        else if (n >= 5)
            n -= 5;
        else if (n >= 2)
            n -= 2;
        else
            n--;

        rest++;
    }

    printf("%d\n", rest);

    return (0);
}
