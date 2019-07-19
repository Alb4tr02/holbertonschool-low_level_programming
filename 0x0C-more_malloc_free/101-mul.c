#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * suma_pp - function that adds the partial proucts to the result
 * @p: parcial product
 * @mg: result
 * @i: position of mg to stat to add
 * @tp: size of p.
 */
void suma_pp(char *p, char *mg, int i, int tp)
{
	int car = 0;
	int res = 0;
	int cont = tp;
	int aux = 0;

	for (; cont >=  0; cont--, i--)
	{
		res = (*(p + cont) - '0') + (*(mg + i) - '0') + car;
		car = res / 10;
		res = (res % 10) + '0';
		*(mg + i) = res;
	}
	res = 0;
	for (aux = i - 1; aux >= 0; aux--)
	{
		res = *(mg + aux) - '0';
		res = res + car;
		car = res / 10;
		res = (res % 10) + '0';
		*(mg + aux) = res;
	}
}
/**
 * create_pointer - creates a espace to store array of char
 * @a: size of array
 * Return: pointer to the array
 */
char *create_pointer(int a)
{
	int i;
	char *p;

	p = malloc(a);

	if (!p)
		return (NULL);
	for (i = 0; i < a; i++)
		*(p + i) = '0';
	return (p);
}
/**
 * _size - counts the number of chars in s
 * @s: pointer to the array of char
 * Return: size of s
 */
int _size(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
/**
 * check_digit - check if all char on p1 and p2 are digits
 * @p1: pointer to the array p1
 * @p2: pointer to the array p2
 * Return: void
 */

void check_digit(char *p1, char *p2)
{
	int a = 0;
	int b = 0;

	while (*(p1 + b))
	{
		if (!isdigit(*(p1 + b)))
			a++;
		b++;
	}
	b = 0;
	while (*(p2 + b))
	{
		if (!isdigit(*(p2 + b)))
			a++;
		b++;
	}
	if (a > 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (*p1 == '0' || *p2 == '0')
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * _mul - multiplies and add the partial products
 * @a: size.
 * @i: index
 * @b: size.
 * @g: size.
 * @s1: factor 1.
 * @s2: factor 2.
 * @mg: result
 * @p: partial product.
 */
void _mul(int a, int i, int b, int g, char *p, char *s1, char *s2, char *mg)
{
	int car = 0;
	int aux = 0;
	int j = b + 1;
	int t3 = j + 1;
	int k = 0;

	for (; a >= 0; a--, i--)
	{
		car = 0;
		b = g;
		j = g + 1;
		for (k = 0; k < t3; k++)
			*(p + i) = '0';
		for (; b >= 0; b--, j--)
		{
			aux = ((s2[a] - '0') * (s1[b] - '0'));
			aux = aux + car;
			p[j] = ((aux % 10) + '0');
			car = aux / 10;
		}
		*(p + j) = car + '0';
		suma_pp(p, mg, (i - 1), (t3 - 1));
	}
}
/**
 * main - check the code for Holberton School students.
 * @argv: array of pointers store the arguments
 * @argc: quantity of arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int l1, l2, lt, i, a = 0, b = 0, g, ind;
	char *mg, *p, *m1, *m2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	check_digit(*(argv + 1), *(argv + 2));

	l1 = _size(*(argv + 1));
	l2 = _size(*(argv + 2));
	ind = l1 + l2;
	mg = create_pointer(l1 + l2);
	m1 = *(argv + 2);
	m2 = *(argv + 1);
	b = l2 - 1;
	a = l1 - 1;
	lt = l2 + 1;

	if (l1 >= l2)
	{
		m1 = *(argv + 1);
		m2 = *(argv + 2);
		b = l1 - 1;
		a = l2 - 1;
		lt = l1 + 1;
	}
	g = b;
	p = create_pointer(lt);
	_mul(a, ind, b, g, p, m1, m2, mg);
	for (i = 0; i < (l1 + l2); i++)
	{
		if (!(*mg == '0' && i == 0))
			printf("%c", *(mg + i));
	}
	printf("\n");
	return (0);
}
