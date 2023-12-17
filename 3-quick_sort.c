#include "sort.h"

/**
 * swapint - swap two ints.
 * @a: first ele to be swapped.
 * @b: second ele to be swapped.
 */

void swapint(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * lomuto - implement Lomuto partitioning
 * @array: array to be paritioned.
 * @low: first index.
 * @high: last index.
 * Return: index of pivoted element.
 */

int lomuto(int *array, size_t low, size_t high)
{
	int pivot = array[high];
	size_t i = low - 1, j;
	for (j = low; j <= high; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swapint(&array[i], &array[j]);
		}
	}
	swapint(&array[i + 1], &array[high]);
	return (i + 1);
}

/**
 * quickSort - Implement quicksort algorithm
 * @array: array to be sorted.
 * @size: size of array.
*/

void quickSort(int *array, size_t size)
{
	int low = 0, high = size - 1;
	if (low < high)
	{
		int pivotIndex = lomuto(array, low, high);

		quickSort(array, low, pivotIndex - 1);
		quickSort(array, pivotIndex + 1, high);
	}
}
