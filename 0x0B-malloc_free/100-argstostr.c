#include <stdlib.h>
/**
 * argstostr - function that cats
 * @ac: one of argu
 * @av: another argu
 *
 * Return: the pointer to the pointer
 */

char *argstostr(int ac, char **av)
{

	int i;
	int j;
	int index;
	int total_length;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	concatenated = (char *)malloc(sizeof(char) * (total_length + 1));

	if (concatenated == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concatenated[index++] = av[i][j];
		}
		concatenated[index++] = '\n';
	}

	concatenated[index] = '\0';

	return (concatenated);
}
