#include "sort.h"

void swap_nodes(listint_t **list, listint_t *big, listint_t *sml){
	listint_t *tmp;

	tmp = sml->next;
	if (big->prev)
		big->prev->next = sml;
	else
		*list = sml;
	if (sml->next)
		sml->next->prev = big;
	sml->next = big;
	sml->prev = big->prev;
	big->next = tmp;
	big->prev = sml;
}

void insertion_sort_list(listint_t **list)
{
	listint_t *head;
	listint_t *tmp;

	head = *list;
	if (!list || !*list || !(*list)->next)
		return;
	while (head)
	{
		tmp = head->next;
		if (head->next && head->n > head->next->n)
		{
			head = head->next;
			while (tmp->prev && tmp->prev->n > tmp->n)
			{
				swap_nodes(list, tmp->prev, tmp);
				print_list(*list);
			}
		}
		else
			head = head->next;
	}
}
