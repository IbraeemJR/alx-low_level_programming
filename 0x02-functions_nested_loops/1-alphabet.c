#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: This function prints the alphabet in lowercase,
 *              with each letter followed by a new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
