#include "lists.h"
/**
 * listint_len - produces the number of elements in a linked lists.
 * @h: traverses the linked list of type listint_t
 * Return: Sum of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

		while (h)
		{
			num++;
			h = h->next;
		}
	return (num);
}
