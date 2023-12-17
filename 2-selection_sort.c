#include "sort.h"

/**
 * selection_sort - sort array with selection sort algo.
 * @array: array to be sorted with ints.
 * @size: size of array.
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int moving_position, min, index_stopped, val_changed = 0;

	for (i = 0; i < size - 1; i++)
	{
		moving_position = array[i];
		min = array[i];
		j = i + 1;
		while (j < size)
		{
			if (array[j] < min)
			{
				min = array[j];
				index_stopped = j;
				val_changed = 1;
			}
			j++;
		}
		if (val_changed == 1)
		{
			print_array(array, size);
			array[i] = min;
			array[index_stopped] = moving_position;
		}
		val_changed = 0;
	}
}
