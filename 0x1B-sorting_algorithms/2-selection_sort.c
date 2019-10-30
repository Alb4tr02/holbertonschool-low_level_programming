#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers
 *               in ascending order using the selection sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, pos;

	if (size < 2 || !array)
		return;
	for (j = 0; j < size - 1; j++)
	{
		for (pos = j, i = j + 1; i < size; i++)
			pos = array[pos] > array[i] ? i : pos;
		if (pos != j)
		{
			array[j] =  array[j] + array[pos];
			array[pos] = array[j] - array[pos];
			array[j] = array[j] - array[pos];
			print_array(array, size);
		}
	}
}
