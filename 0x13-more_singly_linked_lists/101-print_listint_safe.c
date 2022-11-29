#include "lists.h"

/**
 * interval - checks if the linked list has not looped
 * @begin: the beginning of the list
 * @node: the current node
 * @i: the interval that should be at the current position
 *
 * Return: 1 if interval is correct, 0 if there is a loop
 */
size_t interval(const listint_t *begin, const listint_t *node, size_t i)
{
	size_t check = 0;

	while (begin != node)
	{
		begin = begin->next;
		check++;
	}

	return ((check == i) ? 1 : 0);
}

/**
 * print_listint_safe - function that prints a linked list
 * @head: head of a list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *start = head;

	if (head)
	{
		while (head && interval(begin, head, count))
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;

			count++;
		}

		if (head)
			printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
