#include<stdio.h>
/*main - entry point
*Return 0
*/
int main(void)
{
	char ch;
	int x;
	long int y;
	long long int z;
	float a;

	printf("Size of a char: %d byte(s)\n", sizeof(ch));
	printf("Size of an int: %d byte(s)\n", sizeof(x));
	printf("Size of a long int: %d byte(s)\n", sizeof(y));
	printf("Size of a long long int: %d byte(s)\n", sizeof(z));
	printf("Size of a float: %d byte(s)\n", sizeof(a));
	return (0);
}
