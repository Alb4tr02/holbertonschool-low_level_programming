#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - calculates two numbers
 *
 * @argc: number of arguments
 * @argv: pointer to the strings
 * Return: error number.
 */
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (get_op_func(*(argv + 2)))
		{
			int a = atoi(*(argv + 1));
			int b = atoi(*(argv + 3));

			if (b == 0 && (*argv[2] == 47 || *(*(argv + 2)) == '%'))
			{
				printf("Error\n");
				exit(100);
			}
			printf("%d\n", get_op_func(*(argv + 2))(a, b));
			return (0);
		}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	printf("Error\n");
	exit(98);
}
