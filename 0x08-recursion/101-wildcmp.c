/**
 * wildcmp - Compares two strings and handles wildcard character '*'.
 * @s1: The first string to compare.
 * @s2: The second string to compare, which may contain the wildcard '*'.
 *
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		int case1 = wildcmp(s1 + 1, s2);
		int case2 = wildcmp(s1, s2 + 1);

		return (case1 || case2);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}