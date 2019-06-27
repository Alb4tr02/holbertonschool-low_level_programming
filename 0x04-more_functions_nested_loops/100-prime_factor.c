#include <stdio.h>

/**
 * main - This only check if the character is a digit
 * Return: 0 if all it's ok.
 */

int main(void)
{
	long int j;
	long int p = 3;
	long int n = 612852475143;
	int tDv = 0;

	for (p = 3;  p < n; p = p + 2)
	{
		tDv = 0;
		for (j = 2; j < p; j++)
		{
			if ((p % j) == 0)
				tDv = 1;
		}
		if (tDv == 0)
		{
			while ((n % p) == 0)
			{
				n = n / p;
				tDv = 0;
				for (j = 3; j < (n / 2); j = j + 2)
				{
					if ((n % j) == 0)
					{
						tDv = 1;
						j = n;
					}
				}
				if (tDv == 0)
				{
					printf("%ld\n", n);
					return (0);
				}

			}
		}
	}
}
