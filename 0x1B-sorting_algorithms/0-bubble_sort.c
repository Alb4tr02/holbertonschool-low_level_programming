#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers
 *               in ascending order using the Bubble sort algorithm
 * @array: pointer to the array to be sorted
 * @size: size of the array
 * Return: nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int flag = 1;
	int aux = 0;
	size_t top;

	if (size < 2 || array == NULL)
		return;
	top = size - 1;
	while (flag)
	{
		flag = 0;
		for (i = 0; i < top; i++)
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
				flag = 1;
			}
		top--;
	}
}
