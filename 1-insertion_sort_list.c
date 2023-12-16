#include "sort.h"

/**
 * swap_dll - swap previous node with current node if bigger.
 * @node_1: previous node.
 * @node_2: current node.
 * @temp: node hold the previous node for a successful swapping.
 */

void swap_dll(listint_t *node_1, listint_t *node_2, listint_t **temp)
{
	*temp = node_1->prev;
	node_1->next = node_2->next;
	node_1->prev = node_2;
	node_2->next = node_1;
	node_2->prev = *temp;
}

/**
 * insertion_sort_list - implement insertion sort algorithm
 * @list: Double linked list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *previous, *temp;

	current = (*list)->next;

	if (list == NULL || *list == NULL || i < 2)
		return;

	while (current != NULL)
	{
		previous = current->prev;
		while (previous != NULL && previous->n > current->n)
		{
			swap_dll(previous, current, &temp);

			if (temp != NULL)
				temp->next = current;

			if (previous->next != NULL)
				previous->next->prev = previous;

			if (*list == previous)
				*list = current;

			previous = temp;
		}
		print_list(*list);

		current = current->next;
	}
}
