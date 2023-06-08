/**
 * square - calculates the square root of a number
 * @x: an int parameter
 * @y: the number
 * Return: the square root of the number
 */
int square(int x, int y)
{
	if ((x * x) > y)
		return (-1);
	else if ((x * x) == y)
		return (x);
	else
		return (square(x + 1, y));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: the number
 * Return: the natural square root of n if any, or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square(0, n));
}
