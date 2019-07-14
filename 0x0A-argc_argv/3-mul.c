#include <stdio.h>
#include <stdlib.h>
/**
 * main - This fuction only print its program name
 * Return: 0.
 * @argc:  the number of arguments
 * @argv: pointer array to the argumments
 *
 */
int  main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		int a = atoi(*(argv + 1));
		int b = atoi(*(argv + 2));

		printf("%d\n", a * b);
	}
	return (0);
}
