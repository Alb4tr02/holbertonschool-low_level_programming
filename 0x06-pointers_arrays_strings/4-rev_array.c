#include "holberton.h"

/**
 * reverse_array - This fuction only concatenates two strings
 * @a:  is the pointer to the array
 * @n: is the size of the array
 *
 */

void reverse_array(int *a, int n)
{
       	int b = 0;
	int aux = 0;

        for (; b < n / 2; b++)
	{
	        aux = *(a + b);
	        *(a + b) = *(a + (n - b - 1));
		*(a + (n - b - 1)) = aux;
	}
}
