#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - function that prints a linked list
 * @head: head of a list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *sl_p = head, *fs_p = head;
	size_t i = 0;
	int is_loop = 0;

	while (sl_p && fs_p && fs_p->next)
	{
		if (!(fs_p->next->next))
			break;
		sl_p = fs_p->next;
		fs_p = fs_p->next->next;
		if (sl_p == fs_p)
		{
			sl_p = sl_p->next;
			is_loop = 1;
			break;
		}
	}
	if (!is_loop)
	{
		while (head)
		{
			i++;
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		return (i);
	}
	while (head)
	{
		i++;
		if (head == sl_p)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("-> [%p] %d\n", (void *)head, head->next->n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (0);
}
