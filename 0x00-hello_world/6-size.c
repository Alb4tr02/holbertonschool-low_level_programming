#include <stdio.h>

/**
 * main - This only prints a sentence
 *
 * Return: 0 if all is ok
 */


int main(void)
{
	char charVar;
	int intVar;
	long int longintVAr;
	long long int longlongintVar;
	float floatVar;

	printf("Size of a char: %d bytes(s)\n", sizeof(charVar));
	printf("Size of an int: %d byte(s)\n", sizeof(intVar));
	printf("Size of a long int : %d byte(s)\n", sizeof(longintVar));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintVar));
	printf("Size of a float: %d byte(s)\n", sizeof(floatVar));
	return (0);
}
