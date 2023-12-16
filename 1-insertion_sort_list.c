#include "sort.h"

/**
 * swap_dll - Swap two nodes in a dll.
 * @h: pointer to the head of the dll.
 * @n1: pointer to the first node to swap.
 * @n2: second node to swap.
 */
void swap_dll(listint_t **h, listint_t **n1, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2->next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = *n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1 = n2->prev;
}

/**
 * insertion_sort_list - Sorts a dll of ints using the insertion sort.
 * @list: pointer to the head of a doubly-linked list of integers.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iterator, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iterator = (*list)->next; iterator != NULL; iterator = tmp)
	{
		tmp = iterator->next;
		insert = iterator->prev;
		while (insert != NULL && iterator->n < insert->n)
		{
			swap_dll(list, &insert, iterator);
			print_list((const listint_t *)*list);
		}
	}
}
