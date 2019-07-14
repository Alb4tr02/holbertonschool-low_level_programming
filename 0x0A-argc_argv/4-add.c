#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - This fuction only print its program name
 * Return: 0.
 * @argc:  the number of arguments
 * @argv: pointer array to the argumments
 *
 */
int  main(int argc, char *argv[])
{
	int cont;
	unsigned int res = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (--argc)
		{
			argv++;
			cont = 0;
			while (*(*argv + cont))
			{
				if (!isdigit(*(*argv + cont)))
				{
					printf("Error\n");
					return (1);
				}
				cont++;
			}
			res += atoi(*argv);
		}
		printf("%d\n", res);
	}
	return (0);
}
