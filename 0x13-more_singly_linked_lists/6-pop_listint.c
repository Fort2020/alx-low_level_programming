#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * and returns the head node's data n
 * @head: head of the list
 *
 * Return: the head of node's data
 */
int pop_listint(listint_t **head)
{
	int headnode;
	listint_t *h;
	listint_t *cursor;

	if (*head == NULL)
		return (0);

	cursor = *head;
	headnode = cursor->n;
	h = cursor->next;

	free(cursor);

	*head = h;

	return (headnode);
}
