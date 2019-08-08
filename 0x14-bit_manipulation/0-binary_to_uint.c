/**
 * pot - calculates 2 pow exp
 * @exp: exponent
 * Return: 2 pow exp
 */
unsigned int pot(int exp)
{
	unsigned int base =  2;

	if (exp == 0)
		return (1);
	for (; exp > 1; exp--)
		base = base * 2;
	return (base);
}
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to the binary array.
 * Return: decimal number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, cont = 0;

	if (b)
	{
		for (; *(b + cont); cont++)
			if (*(b + cont) != '0' && *(b + cont) != '1')
				return (0);
		for (; *b; b++, cont--)
			res += (*b - '0') * (pot(cont - 1));
	}
	return (res);
}
