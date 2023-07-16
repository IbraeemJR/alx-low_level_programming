/**
 * string_nconcat - Concatenates n bytes of one string to another string
 * @s1: String to append to
 * @s2: String to concatenate from
 * @n: Number of bytes from s2 to concatenate to s1
 *
 * Return: A pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/* Calculate the lengths of s1 and s2 */
	unsigned int len1 = 0, len2 = 0;
	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	/* Allocate memory for the resulting string */
	char *s;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	/* Check if memory allocation is successful */
	if (!s)
		return (NULL);

	/* Copy the characters from s1 to the resulting string */
	unsigned int i = 0;
	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	/* Copy n bytes from s2 to the resulting string */
	unsigned int j = 0;
	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	/* Copy remaining bytes from s2 to the resulting string */
	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
