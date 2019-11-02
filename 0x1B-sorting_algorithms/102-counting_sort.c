#include "sort.h"
#include <stdlib.h>
/**
 * counting_sort - function that sorts an array of integers in
 *                  ascending order using the Counting sort algorithm
 * @array: pointer to the array
 * @size: size of the array
 * Return: nothing
 */
void counting_sort(int *array, size_t size)
{
	int max, j, cnt, n, k, pos, t;
	size_t i;
	int *arr;

	if (size < 2 || !array)
		return;
	for (i = 1, max = array[0]; i < size; i++)
		max = max < array[i] ? array[i] : max;
	arr = (int *)malloc(sizeof(int) * (max + 1));
	for (n = 0, cnt = 0; n <= max;  arr[n] = cnt, n++)
		for (j = 0; j < (int)size; j++)
			cnt = array[j] == n ? cnt + 1 : cnt;
	print_array(arr, (size_t)(max + 1));
	for (t = max, pos = (int)(size - 1); pos >= 0;  max--, t--)
		for (k = arr[t] - arr[t - 1]; k > 0; k--, pos--)
			array[pos] = max;
	free(arr);
}
