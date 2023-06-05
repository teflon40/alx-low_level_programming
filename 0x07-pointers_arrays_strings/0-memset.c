
/**
 * _memset - fills the first n bytes of
 * memory area pointed to by s with a constant byte.
 * @s: points to a memory area.
 * @n: the number of bytes of s to be filled.
 * @b: the constant byte
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i = 0;

	while (i < n)
	{
		*p = b;
		i++, p++;
	}
	return (s);
}
