#include "main.h"
#include <string.h>

int is_alphabetic(char c);
int is_palindrome_recursive(char *start, char *end);

/**
 * is_palindrome - Runs through the string and checks if it's a palindrome.
 * @s: A pointer to a string in memory that will be checked.
 *
 * Return: 1 if the string pointed to is a palindrome, 0 if otherwise.
**/

int is_palindrome(char *s)
{
	return (is_palindrome_recursive(s, s + strlen(s) - 1));
}

/**
 * is_palindrome_recursive - Recursively checks if a string is a palindrome.
 * @start: A pointer to the start of the string segment being checked.
 * @end: A pointer to the end of the string segment being checked.
 *
 * Return: 1 if the string segment is a palindrome, 0 otherwise.
 */

int is_palindrome_recursive(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (!is_alphabetic(*start))
	{
		return (is_palindrome_recursive(start + 1, end));
	}
	if (!is_alphabetic(*end))
	{
		return (is_palindrome_recursive(start, end - 1));
	}
	if (*start == *end)
	{
		return (is_palindrome_recursive(start + 1, end - 1));
	}
	return (0);
}

/**
 * is_alphabetic - Checks if the character 'c' is an alphabet letter (a-zA-Z).
 * @c: The character to be checked.
 *
 * Return: 1 if 'c' is an alphabet letter, 0 otherwise.
 */

int is_alphabetic(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
