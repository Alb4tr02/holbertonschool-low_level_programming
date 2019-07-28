#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings -  function that prints strings, followed by a new line.
 * @n: number of strings
 * @separator: separator between strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a = n;
	va_list args;
	char *p;
	char *sep;

	if (separator)
		sep = (char *)separator;
	else
		sep = "";

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (a-- > 1)
	{
		p = va_arg(args, char *);
		if (p)
			printf("%s%s", p, sep);
		else
			printf("(nil)%s", sep);
	}
	p = va_arg(args, char *);
	if (va_arg(args, char *))
		printf("%s\n", p);
	else
		printf("(nil)\n");
	va_end(args);
}
