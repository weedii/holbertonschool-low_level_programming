#include "main.h"

/**
 * main - program that multiplies two numbers
 * @argc: argument count
 * @argv: rgument vector
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i;

	if (argc < 3)
		printf("Error\n");

	for (i = 1; i < argc - 1; i++)
	{
		printf("%d\n", atoi(argv[i]) * atoi(argv[i + 1]));
	}

	return (0);
}
