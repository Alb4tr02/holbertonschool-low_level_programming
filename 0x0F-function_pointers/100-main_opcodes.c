#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the main opcode
 * @argc: number of arguments
 * @argv: pointer to the arguments
 * Return: 0 if all is ok
 */
int main(int argc, char *argv[])
{
	short n = 255;
	int cont  = 1;
	int (*ptr_main)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	int nb = atoi(*(argv + 1));

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	else
	{
		while (nb-- > 1 && cont++)
		{
			if ((*((char *)(ptr_main + cont - 2)) & n) < 15)
				printf("0");
			printf("%x ", *((char *)(ptr_main + cont - 2)) & n);
		}
		if ((*((char *)(ptr_main + cont - 1)) & n) < 15)
			printf("0");
		printf("%x\n", *((char *)(ptr_main + cont - 1)) & n);
	}
	return (0);
}
