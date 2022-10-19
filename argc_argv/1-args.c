#include "main.h"

/**
 * main - program that prints its name
 * @argc: argument count
 * @argv: rgument vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
    int i;

    for (i = 0; argv[i] != NULL; i++)
        ;
    printf("%d\n", argc - 1);

    return 0;
}
