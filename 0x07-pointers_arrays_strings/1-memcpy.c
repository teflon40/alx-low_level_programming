
/**
 * _memcpy - copies memory area
 * @src: the memory area to copy n bytes from
 * @dest: the memory area to receive n bytes
 * @n: the number of bytes to be copied.
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest, *q = src;
	unsigned int i = 0;

	while (i < n)
	{
		*p = *q;
		p++, q++, i++;
	}
	return (dest);
}
