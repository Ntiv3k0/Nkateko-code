#include "lists.h"
/**
 * pop_listint - removes the head nodes of a linked list
 * @head: first element pointer on the linked list
 * Return: the deleted data inside the element, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
