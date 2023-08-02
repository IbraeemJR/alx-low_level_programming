/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	int length = _strlen_recursion(s);

	return (check_pal(s, 0, length));
}

/**
 * _strlen_recursion - Calculates the length of a string recursively.
 * @s: The string for which to calculate the length.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - Checks if the string is a palindrome recursively.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if the substring is a palindrome, 0 if not.
 */
int check_pal(char *s, int start, int end)
{
	if (*(s + start) != *(s + end - 1))
		return (0);

	if (start >= end)
		return (1);

	return (check_pal(s, start + 1, end - 1));
}
