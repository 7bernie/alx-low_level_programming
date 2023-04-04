#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: head of the linked list.
 * @index: index is the index of the node
 *
 * Return: NULL is the node at index not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int idx;

	idx = 0;
	if (head == NULL)
		return (NULL);
	while (idx != index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		idx++;
	}
	return (head);
}
