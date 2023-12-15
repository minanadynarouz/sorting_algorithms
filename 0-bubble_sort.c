#include "sort.h"

/**
 * swapint - to swap two adjacent ints
 * @x: first int
 * @y: second int
 */

void swapint(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - implementing bubble sort algorithm.
 * @array: array to be sorted.
 * @size: size of the array.
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swapped;

	j = 0;
	while (j < size - 1)
	{
		swapped = 0;
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapint((array + i), (array + i + 1))
				swapped = 1;
			}
		}
		print_array(array, size);
		if (swapped == 0)
			break;
		j++;
	}
}
