#include <stdio.h>
#include <unistd.h>
/**
 * main - This only prints a sentence
 *
 * Return: 0 if all is ok
 */


int main(void)
{
	char *chVar = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, chVar, 59);
	return (1);
}
