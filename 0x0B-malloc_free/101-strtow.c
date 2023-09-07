#include <stdlib.h>
#include <stdio.h>

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				in_word = 0;
			}
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		str++;
	}

	return (count);
}

char **strtow(char *str)
{
	int word_count;
	char **words;
	int word_index;
	int in_word;
	char *word_start;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);

	if (word_count == 0)
	{
		return (NULL);
	}

	words = (char **)malloc((word_count +
				1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	word_index = 0;
	in_word = 0;
	word_start = NULL;

	while (*str)
	{
		if (is_space(*str))
		{
			if (in_word)
			{
				in_word = 0;
				*str = '\0';
				words[word_index++] = word_start;
				word_start = NULL;
			}
		}
		else
		{
			if (!in_word)
			{
				in_word = 1;
				word_start = str;
			}
		}
		str++;
	}
	if (in_word)
	{
		words[word_index++] = word_start;
	}

	words[word_index] = NULL;

	return (words);
}
