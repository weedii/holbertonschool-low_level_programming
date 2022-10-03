#include <stdio.h>
/**
 *main - function main
 *Return: 0
 */
int main(void)
{
int i;

i = 'a';
while (i <= 'z')
{
i++;
if ((i == 'e') || (i == 'q'))
{i++; }
else
{putchar(i); }
}
putchar('\n');
return (0);
}
