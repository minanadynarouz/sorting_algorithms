#include "sort.h"

/**
 * shell_sort - sort array using shell_sort knuth seq
 * @array: array to be sorted.
 * @size: size of the array.
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, gap = 1;
	int temp;

	if (!array || size < 2)
		return;

	while (gap < size / 3)
	{
		gap = (3 * gap) + 1;
	}

	while (gap > 0)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j = j - gap;
			}
			array[j] = temp;
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}
