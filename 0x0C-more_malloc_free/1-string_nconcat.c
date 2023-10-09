#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings, s1 and s2.
 * @s1: is the first string to be concatenated.
 * @s2: is the second string to be concatenated.
 * @n: number of character in s2 to be included in the new concatenated string.
 *
 * Return: NULL is the concatenated string is null.
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int string1, string2, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	string1 = strlen(s1);
	string2 = n;

	if (n >= strlen(s2))
		string2 = strlen(s2);

	concat = malloc(sizeof(char) * (string1 + string2 + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < string1; i++)
		concat[i] = s1[i];
	for (; i < string1 + string2; i++)
		concat[i] = s2[i - string1];

	concat[i] = '\0';

	return (concat);
}
