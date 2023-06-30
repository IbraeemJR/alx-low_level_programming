#include "main.h"

/**
 * _strcmp - Compare string values
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Difference btw the ASCII values of the 1st non-matching characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]); /* Corrected return statement with parentheses*/
		i++;
	}

	return (0);
}
