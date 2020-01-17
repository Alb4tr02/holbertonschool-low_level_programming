#include "search_algos.h"
/**
 * p -  function that searches for a value in an array of integers
 *                  using the Binary search algorithm
 * @array: pointer to the array
 * @start: number of elements in array
 * @end: the value to search for
 * Return: Always EXIT_SUCCESS
 */
void p(int *array, size_t start, size_t end)
{
	char *sp;

	printf("Searching in array: ");
	for (sp = ""; start <= end; start++, sp = ", ")
		printf("%s%d", sp, array[start]);
	printf("\n");
}
/**
 * binary_search -  function that searches for a value in an array of integers
 *                  using the Binary search algorithm
 * @array: pointer to the array
 * @size: number of elements in array
 * @value: the value to search for
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m  = (l + r) / 2;

	if (!array)
		return (-1);
	for (p(array, l, r); l <= r; m = (l + r) / 2, p(array, l, r))
	{
		if (value == array[m])
			return ((int) m);
		l = (array[m] > value) ? l : m + 1;
		r = (array[m] > value) ? m - 1 : r;
	}
	return (-1);
}
