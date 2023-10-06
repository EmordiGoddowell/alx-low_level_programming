#include <stdlib.h>
#include <stdio.h>

int count_words(char *str);
char **alloc_words(int num_words);
char *extract_word(char *start, char *end);

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
**/

char **strtow(char *str)
{
	int i;
	char *word_start = NULL;
	int word_index = 0;
	int num_words;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);

	words = alloc_words(num_words);
	if (words == NULL)
		return (NULL);

	for (; *str != '\0'; str++)
	{
		if (*str != ' ' && word_start == NULL)
		{
			word_start = str;
		}
		else if ((*str == ' ' || *(str + 1) == '\0') && word_start != NULL)
		{
			words[word_index++] = extract_word(word_start, str - 1);
			if (words[word_index - 1] == NULL)
			{
				for (i = 0; i < word_index - 1; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			word_start = NULL;
		}
	}
	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: Number of words in the string.
**/

int count_words(char *str)
{
	int num_words = 0;
	int in_word = 0;

	for (; *str != '\0'; str++)
	{
		if (*str != ' ' && in_word == 0)
		{
			num_words++;
			in_word = 1;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		if (in_word == 1)
		{
			num_words++;
		}
	}
	return (num_words);
}

/**
 * alloc_words - Allocates memory for an array of strings.
 * @num_words: The number of words.
 *
 * Return: Pointer to the allocated array of strings.
**/

char **alloc_words(int num_words)
{
	char **words;
	int i;

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i <= num_words; i++)
		words[i] = NULL;

	return (words);
}

/**
 * extract_word - Extracts a word from a given range in a string.
 * @start: Pointer to the start of the word.
 * @end: Pointer to the end of the word.
 *
 * Return: Pointer to the extracted word.
**/

char *extract_word(char *start, char *end)
{
	int word_length = end - start + 1;
	char *word;
	int i;

	word = malloc((word_length + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < word_length; i++)
		word[i] = start[i];

	word[word_length] = '\0';
	return (word);
}
