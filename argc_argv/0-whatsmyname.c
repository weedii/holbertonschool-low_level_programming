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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
