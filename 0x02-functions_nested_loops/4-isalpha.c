#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 *
 * Description: This function takes a character as input and checks if it is an alphabetic character.
 * It returns 1 if the character is a letter (either lowercase or uppercase), and 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
