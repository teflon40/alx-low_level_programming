
/**
 * is_prime - checks for prime number
 * @x: checks for factors of the number
 * @y: the number to be checked
 * Return: 1 if y is a prime number or 0 if not
 */
int is_prime(int x, int y)
{
	if ((x * x) <= y)
	{
		if (y % x == 0)
			return (0);
		else
			return (is_prime(x + 1, y));
	}
	else
		return (1);
}

/**
 * is_prime_number - checks whether a number is prime or not
 * @n: the number
 * Return: the return value of is_prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(2, n));
}
