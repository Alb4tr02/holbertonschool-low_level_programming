#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int chg(int c);
/**
 * main - This fuction only print its program name
 * Return: 0.
 * @argc:  the number of arguments
 * @argv: pointer array to the argumments
 *
 */
int  main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (**(argv + 1) == '-')
	{
		printf("0\n");
		return (0);
	}
	int cents = atoi(*(argv + 1));
	int res = chg(cents);

	printf("%d\n", res);
	return (0);
}
/**
 * chg - This fuction calculates the minimum number of coins
 * Return: number of coins.
 * @c: money
 *
 */
int chg(int c)
{
	if (c == 0)
		return (0);
	if (c % 25 == 0)
		return (1 + chg(c - 25));
	if (c % 10 == 0)
		return (1 + chg(c - 10));
	if (c % 5 == 0)
		return (1 + chg(c - 5));
	if (c % 2 == 0)
		return (1 + chg(c - 2));
	if (c % 1 == 0)
		return (1 + chg(c - 1));
	return (0);
}
