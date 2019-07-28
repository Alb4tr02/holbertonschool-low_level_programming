#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @n: number of ints
 * @separator: separator between numbers
 * Return: sum of al it's parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int a = n;
	va_list args;

	va_start(args, n);
	while (a-- > 1)
	{
		printf("%d", va_arg(args, int));
		if (separator)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(args, int));
}
