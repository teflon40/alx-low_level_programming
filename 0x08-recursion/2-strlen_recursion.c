
/**
 * _strlen_recursion - calculates the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	char *p = s;

	if (!*p)
		return (0);
	else
		return (1 + _strlen_recursion(p + 1));
}
