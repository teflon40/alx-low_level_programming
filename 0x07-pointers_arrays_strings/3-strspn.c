
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: a string
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0, j = 0;
	char *p = s, *q;

	while (*p != '\0')
		len++, p++;
	for (; j < len; )
	{
	unsigned int i = j;

		for (q = accept; *q != '\0'; q++)
		{
			if (s[j] == *q)
			{
				j++;
				break;
			}
		}
		if (i == j)
			return (j);
	}
	return (j);
}
