#include "sort.h"
#include <stdio.h>

/**
 * insertion_sort_list - sorts a DLL of integers in
 * ascending order using the insertion sort
 * algorithm
 *
 * @list: doubly linked list
 * Return: no return
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *sorted, *cur;

	if (*list == NULL)
		return;
	sorted = *list;

	cur = sorted->next;
	while (cur != NULL)
	{
		while (cur->prev != NULL && cur->n < cur->prev->n)
		{
			cur->prev->next = cur->next;

			if (cur->next != NULL)
				cur->next->prev = cur->prev;
			cur->next = cur->prev;
			cur->prev = cur->prev->prev;
			cur->next->prev = cur;

			if (cur->prev != NULL)
				cur->prev->next = cur;
			else
				*list = cur;
			print_list(*list);
		}
		cur = cur->next;
	}
}
