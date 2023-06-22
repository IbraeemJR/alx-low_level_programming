#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 *
 * Description: This function takes a character as input and checks if it is
 *              a lowercase alphabetic character. It returns 1 if the
 *              character is lowercase, and 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
