#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to be checked
 *
 * Return: 1 if the character is lowercase, otherwise 0.
 *
 * Description: This function takes a character as input and checks if it is lowercase.
 * It returns 1 if the character is lowercase (between 'a' and 'z'), and 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
