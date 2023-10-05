#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory,
 *         which contains s1, followed by s2, and null terminated.
 *         Returns NULL on failure.
**/

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(concat_str, s1);
	else
		strcpy(concat_str, "");

	if (s2 != NULL)
		strcat(concat_str, s2);

	return (concat_str);
}
