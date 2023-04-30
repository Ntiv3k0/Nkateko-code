#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - insert a node at the beginning of the list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * Return the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	struct Node* new_node = (struct Node)malloc(sizeof(struct Node));

	new_node->next = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
	return (*head);
}
