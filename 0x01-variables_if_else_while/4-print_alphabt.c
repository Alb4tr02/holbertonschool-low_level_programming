#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This only prints the last digit of n
 *
 * Return: 0 if all is ok
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (!(i == 'e' || i == 'q'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
