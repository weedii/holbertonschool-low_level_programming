#include <stdio.h>
/**
 *main - function main
 *Return: 0
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar('0' + i);
if (i == 9)
{continue; }
putchar(',');
putchar(' ');
}

putchar('\n');
return (0);
}
