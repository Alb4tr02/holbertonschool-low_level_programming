#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char -  function that prints a char
 * @list: list of arguments
 * Return: nothing
 */
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}
/**
 * print_integer -  function that prints a integer
 * @list: list of arguments
 * Return: nothing
 */
void print_integer(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * print_float -  function that prints a float
 * @list: list of arguments
 * Return: nothing
 */
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * print_string -  function that prints a string
 * @list: list of arguments
 * Return: nothing
 */
void print_string(va_list list)
{
	char *s;

	s = va_arg(list, char*);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}
/**
 * print_all -  function that prints with format
 * @format: list of formats
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, j = -1;
	va_list list;
	char *sep = "";
	op_t fun[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
	};

	va_start(list, format);
	while (format && *(format + i))
	{
		while (++j < 4)
		{
			if (fun[j].op[0] == *(format + i))
			{
				printf("%s", sep);
				fun[j].f(list);
				sep = ", ";
				break;
			}
		}
		j  = 0;
		i++;
	}
	printf("\n");
	va_end(list);
}
