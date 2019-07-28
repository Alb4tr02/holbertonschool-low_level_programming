#include <stdarg.h>
/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: number of ints
 * Return: sum of al it's parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int a = n;
	int res = 0;
	va_list args;

	va_start(args, n);
	while (a-- > 0)
		res += va_arg(args, int);
	return (res);
}
