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
