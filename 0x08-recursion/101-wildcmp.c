#include "main.h"

/**
 * wildcmp - Check s1 and s2 and return 1 if they're identical, else returns 0.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared. that contain '*'.
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}
	return (0);
}
