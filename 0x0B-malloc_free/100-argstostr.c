#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into a single string.
 * @ac: The number of arguments.
 * @av: The double pointer array of arguments.
 *
 * Return: Pointer to the concatenated string (Success),
 *         or NULL if memory allocation fails or no arguments passed.
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, current_position = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
	}

	/* Add space for newline characters after each argument */
	total_length += ac;

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (total_length + 1));
	if (str == NULL)
		return (NULL);

	/* Copy each argument into the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[current_position] = av[i][j];
			current_position++;
		}

		/* Add a newline character after each argument */
		str[current_position] = '\n';
		current_position++;
	}

	/* Add null-terminator at the end of the concatenated string */
	str[current_position] = '\0';

	return (str);
}
