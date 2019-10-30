#include "sort.h"
/**
 * partition - function that divide the array
 * @arr: pointer to the array to be sorted
 * @size: size of the array
 * @end: start index
 * @start: end index
 * Return: the new pivot index
 */

int partition(int *arr, int start, int end, size_t size)
{
	int pv, pi, i, aux, t1, t2;

	pv = arr[end];
	pi = start;

	for (i = start; i < end; i++)
	{
		if (arr[i] < pv)
		{
			aux = arr[i];
			t1 = aux;
			t2 = arr[pi];
			arr[i] = arr[pi];
			arr[pi] = aux;
			pi++;
			if (t1 != t2)
				print_array(arr, size);
		}
	}
	aux = arr[end];
	t1 = aux;
	t2 = arr[pi];
	arr[end] = arr[pi];
	arr[pi] = aux;
	if (t1 != t2)
		print_array(arr, size);
	return (pi);
}
/**
 * quick - function that sorts an array of integers
 *               in ascending order using the quick_sort algorithm
 * @arr: pointer to the array to be sorted
 * @size: size of the array
 * @start: start index 0
 * @end: end indes size - 1
 * Return: nothing
 */

void quick(int *arr, int start, int end, size_t size)
{
	int pivot;

	if (start < end)
	{
		pivot = partition(arr, start, end, size);
		quick(arr, start, pivot - 1, size);
		quick(arr, pivot + 1, end, size);
	}
}

/**
 * quick_sort - function that sorts an array of integers
 *               in ascending order using the quick_sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2 || !array)
		return;
	quick(array, 0, (int)(size - 1), size);
}
