#include <stdio.h>
/**
 *main - function main
 *Return: 0
 */
int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{putchar(i + '0'); }

for (j = 'a'; j <= 'f'; j++)
{putchar(j); }

putchar('\n');
return (0);
}
