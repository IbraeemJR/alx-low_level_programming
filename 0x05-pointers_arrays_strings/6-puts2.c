#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting from the 1st one.
 * @str: Input string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (*str != '\0')
	{
		str++;
		length++;
	}

	for (i = 0; i < length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}

