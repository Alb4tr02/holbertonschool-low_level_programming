/**
 * hdiv - only check if the nnumber n has divisors.
 * @n: number.
 * @c: cont.
 * Return: 0 if the number has divisors, 1 in otherwise.
 */
int hdiv(int n, int c)
{
	if (n > 1)
	{
		if (c == n)
			return (1);
		if (c < n)
		{
			if (n % c == 0)
				return (0);
			return (hdiv(n, (c + 1)));
		}
	}
	return (0);


}
/**
 * is_prime_number - only check if the nnumber n has divisors.
 * @n: number.
 * Return:1 if the number is prime, 0 in otherwise.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n == 1)
		return (0);
	return (hdiv(n, 2));
}
