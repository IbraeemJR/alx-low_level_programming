#ifndef MAIN_H
#define MAIN_H

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: The constant byte to fill the memory with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area (s).
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, returns the number of characters written.
 *         On error, returns -1 and sets errno.
 */
int _putchar(char c);

/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destination memory area.
 * @src: Pointer to the source memory area.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the destination memory area (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string.
 * @c: The character to be located.
 *
 * Return: A pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c);

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to search for.
 *
 * Return: A pointer to the first occurrence in s of any of the characters
 *         specified in accept, or NULL if no such character is found.
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - Prints the chessboard.
 * @a: Pointer to the 2D array representing the chessboard.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: The size of the matrix.
 *
 * Return: void.
 */
void print_diagsums(int *a, int size);

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to be set.
 * @to: Pointer to the char to set the pointer to.
 *
 * Return: void.
 */
void set_string(char **s, char *to);

#endif /* MAIN_H */

