#include "sort.h"

/**
 * bubble_sort - implementing bubble sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swapped;

	if (array == NULL)
		return;

	j = 0;
	while (j < size - 1)
	{
		swapped = 0;
		for (i = 0; i < size - j - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
			}
		}
		print_array(array, size);
		if (swapped == 0)
			break;
		j++;
	}
}
