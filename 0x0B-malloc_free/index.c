#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
**/

char **strtow(char *str)
{
	int i; int word_index = 0; int num_words = 0; int in_word = 0;
	char *ptr; char **words; char *word_start; int word_length;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (ptr = str; *ptr != '\0'; ptr++)
		if (*ptr != ' ' && in_word == 0)
		{
			num_words++;
			in_word = 1;
		}
		else if (*ptr == ' ')
		{
			in_word = 0;
		}

	if (num_words == 0)
		return (NULL);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= num_words; i++)
		words[i] = NULL;
	word_start = NULL;

	for (ptr = str; *ptr != '\0'; ptr++)
		if (*ptr != ' ' && word_start == NULL)
		{
			word_start = ptr;
		}
		else if ((*ptr == ' ' || *(ptr + 1) == '\0') && word_start != NULL)
		{
			word_length = (ptr - word_start) + ((*ptr == ' ') ? 0 : 1);
			words[word_index] = malloc((word_length + 1) * sizeof(char));
		}
			if (words[word_index] == NULL)
				free(words);
				return (NULL);

			for (i = 0; i < word_length; i++)
				words[word_index][i] = word_start[i];
			words[word_index][word_length] = '\0';
			word_start = NULL;
			word_index++;
	return (words);
}
