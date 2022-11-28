#include "lists.h"

/**
 * free_listint - function that frees a list
 * @head: head of the list
 *
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *cursor;
	listint_t *index;

	if (head != NULL)
	{
		index = *head;
		while ((cursor = index) != NULL)
		{
			index = index->next;
			free(cursor);
		}
		*head = NULL;
	}
}
