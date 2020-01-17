#include "search_algos.h"
/**
 * linear_search -  function that searches for a value in an array of integers
 *                  using the Linear search algorithm
 * @array: pointer to the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for ( ; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return ((int) i);
	}
	return (-1);
}
