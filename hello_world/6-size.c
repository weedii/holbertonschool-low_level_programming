#include<stdio.h>
/*main - entry point*/
/*return 0*/
int main(void)
{
	char ch;
	int x;
	long int y;
	long long int z;
	float a;

	printf("Size of a char: %d bytes(s)\n", sizeof(ch));
	printf("Size of an int: %d bytes(s)\n", sizeof(x));
	printf("Size of a long int: %d bytes(s)\n", sizeof(y));
	printf("Size of long long int: %d bytes(s)\n", sizeof(z));
	printf("Size of a float: %d bytes(s)\n", sizeof(a));
	return (0);
}
