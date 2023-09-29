#include "main.h"
#include <string.h>


/**
 * is_palindrome - Runs through the string and check if its a palindrome.
 * @s: a pointer to a string im memory that will be checked.
 *
 * Return: 1 if the string pointed to is a palindrome and 0 if otherwise.
**/

int is_palindrome(char *s)
{
	if (*s == '\0' || *(s + 1 ) == '\0')
        {
                return (1);
        }
        if (!is_alphabetic(*s))
        {
                return (is_palindrome(s + 1));
        }
        if (*s == *(s + strlen(s) - 1))
        {
                return (is_palindrome(s + 1));
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
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}
