#include "main.h"

/**
 * print_alphabet - Prints all the alphabets in lowercase
 *
 * Description: This function prints all the alphabets from 'a' to 'z' in lowercase.
 * Each letter is printed using the _putchar function.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
