#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to stdout
 * @c: The character to be printed
 *
 * Return: On success, 1 is returned.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}