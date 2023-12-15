#include "sort.h"

/**
 * bubble_sort - implementing bubble sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t n = 0, t = size;
	int temp;

	if (array == NULL)
		return;
	for (t = size; t > 0; t--)
	{
		for (n = 0; n < size - 1; n++)
		{
			if (array[n] > array[n + 1])
			{
				temp = array[n];
				array[n] = array[n + 1];
				array[n + 1] = holder;
				print_array(array, size);
			}
		}
	}
}
