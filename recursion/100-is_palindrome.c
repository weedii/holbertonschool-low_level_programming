#include "main.h"

/**
 * palindrome_check - check palindrome string and return to is_palindrome
 * @s: pointer to a string
 * @ch: pointer to a string
 * Return: 1 or 0
 */

int palindrome_check(char *s, char *ch)
{
	if (*s == '\0')
		return (1);

	if (*s != *ch)
	{
		return (0);
	}
	return (palindrome_check(s + 1, ch - 1));
}

/**
 * is_palindrome - check palindrome string
 * @s: pointer to a string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	char *ch = s + strlen(s) - 1;

	int palindrome_check(char *s, char *ch);
	return (palindrome_check(s, ch));
}
