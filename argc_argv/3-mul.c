#include "main.h"

/**
 * main - program that prints all arguments it receives
 * @argc: argument count
 * @argv: rgument vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
    int i;

    for (i = 1; i <= argc; i++)
    {
        printf("%d\n", atoi(argv[i]) * atoi(argv[i + 1]));
    }

    return (0);
}
