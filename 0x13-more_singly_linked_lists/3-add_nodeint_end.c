#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a linked list
 * @head - head of a list
 * @n: the n element
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cursor;

	(void)cursor;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	cursor = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = new;
	}
	return (*head);
}
