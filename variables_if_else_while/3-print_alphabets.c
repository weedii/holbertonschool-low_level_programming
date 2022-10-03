#include <stdio.h>
/**
 *main - function main
 *Return: 0
 */
int main(void)
{
int i;
int j;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (j = 'A'; j <= 'Z'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
