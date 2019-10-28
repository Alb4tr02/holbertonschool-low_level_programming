#include "sort.h"
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int flag = 1;
	int aux = 0;

	if(size < 2)
		return;
	while(flag)
	{
		flag = 0;
		for(i = 0; i < size - 1; i++)
			if(array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				print_array(array, size);
				flag = 1;
			}
	}
}
