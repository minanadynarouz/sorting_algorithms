#include "sort.h"

/**
 * swapint - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */

void swapint(int *a, int *b)
{
        int temp;

        temp = *a;
        *a = *b;
        *b = temp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped;

	if (array == NULL || size < 2)
		return;

	j = 0;
	while (j < size - 1)
	{
		swapped = 0;
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				swapint(array + i, array + i + 1);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
		j++;
	}
}
