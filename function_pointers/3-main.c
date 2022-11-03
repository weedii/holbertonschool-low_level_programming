#include "3-calc.h"

/**
 * main - the main fuction
 * @argc: number of elements
 * @argv: array of elements
 * Return: (0)
 */

int main(int argc, char const *argv[])
{
	int (*calc)(int, int);
	int res;
	char opp;

	opp = *(argv[2]);
	calc = get_op_func(&opp);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (atoi(argv[3]) <= 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}
	res = calc(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);

	return (0);
}
