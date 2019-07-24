#include <stdlib.h>
/**
 * int_index - searches for an integer.
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer ti the function
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (cmp != NULL && size > 0 && array != NULL)
	{
		int i = 0;

		for (; i < size; i++)
		{
			if (cmp(*(array + i)))
				return (i);
		}
	}
	return (-1);
}
