#include <stdio.h>
/**
 * main - This fuction only print its program name
 * Return: 0.
 * @argc:  the number of arguments
 * @argv: pointer array to the argumments
 *
 */
int  main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
