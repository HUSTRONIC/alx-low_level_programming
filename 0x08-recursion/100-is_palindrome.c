#include "main.h"

int check_pal(char *s, int i, int l);
int n_recursion(char *s);

/**
 * is_palindrome - function that returns 1 if a string is
 * a palindrome and 0 if not
 * @s: string to reverse
 * Return: 1 if it is, 0 oterwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	return (check_pal(s, 0, n_recursion(s)));
}

/**
 * n_recursion - return length of a string
 * @s: string to be checked
 * Return: length of the string
 */

int n_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + n_recursion(s + 1));
}


/**
 * check_pal - check the characters recursively
 * for palindrome
 * @s: string to check
 * @i: iterrator
 * @l: length of the string
 * Return: 1 if palindrome, 0 otherwise
 */

int check_pal(char *s, int i, int l)
{
if (*(s + i) != *(s + l - 1))
	return (0);
if (i >= l)
	return (1);
return (check_pal(s, i + 1, l - 1));

}
