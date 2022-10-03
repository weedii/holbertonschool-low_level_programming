#include <stdio.h>
/**
 *main - function main
 *Return: 0
 */
int main(void)
{
char i;

i = 'a';
while (i <= 'z')
{
if ((i != 'e') && (i != 'q'))
{putchar(i); }
i++;
}

putchar('\n');
return (0);
}
