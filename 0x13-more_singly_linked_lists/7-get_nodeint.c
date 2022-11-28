#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a linked list
 * @head: head of a list
 *
 * Return: nth node. If node does not exist, returns NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	int index;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
