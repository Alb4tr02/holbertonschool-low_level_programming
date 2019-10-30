#include "sort.h"
/**
 * sort - function that implements selection sort in sub arrays
 * @array: pointer to the array to be sorted
 * @kna: number in the knuth sequence
 * @size: size of array
 * Return: 1 if the array is complete sorted
 */
size_t sort(int *array, int kna, size_t size)
{
	size_t i, j, pos, flag, k;
	int aux;

	for (j = 0; (int)j < kna; j++)
	{
		for (k = j; k < size; k += kna)
		{
			for (pos = k, i = k + kna; i < size; i += kna)
				pos = array[pos] > array[i] ? i : pos;
			if (pos != j)
			{
				aux = array[k];
				array[k] = array[pos];
				array[pos] = aux;
				flag = 0;
			}
		}
	}
	return (flag);
}
/**
 * shell_sort - function that sorts an array of integers in ascending order
 *              using the Shell sort algorithm, using the Knuth sequence
 * @array: pointer to the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t kn, kna;

	if (size < 2 || !array)
		return;
	for (kn = 1, kna = 1; kn < size; kn = (kn * 3) + 1)
		kna = kn;
	for (; kna >= 1; kna = (kna - 1) / 3)
	{
		if (sort(array, kna, size))
			return;
		print_array(array, size);
	}
}
