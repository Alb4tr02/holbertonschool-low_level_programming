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
	int cents;
	int res;

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
	cents = atoi(*(argv + 1));
	res = chg(cents);

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
	int a = 0;

	while (c)
	{
		if (c % 25 == 0)
		{
			c -= 25;
			a++;
			continue;
		}
		if (c % 10 == 0)
		{
			c -= 10;
			a++;
			continue;
		}
		if (c % 5 == 0)
		{
			c -= 5;
			a++;
			continue;
		}
		if (c % 2 == 0)
		{
			c -= 2;
			a++;
			continue;
		}
		if (c % 1 == 0)
		{
			c--;
			a++;
			continue;
		}
	}
	return (a);
}
