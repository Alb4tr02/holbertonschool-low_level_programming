#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array.
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer ti the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL && size != 0 && array != NULL)
	{
		unsigned int i = 0;

		for (; i < size; i++)
			action(*(array + i));
	}
}
