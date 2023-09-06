#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 *
 * Return: A pointer to a newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1;
	unsigned int len2;
	char *concatenated;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	len1 = 0;


	len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concatenated = (char *)malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (j = 0; j <= len2; j++)
	{
		concatenated[len1 + j] = s2[j];
	}

	return (concatenated);
}
