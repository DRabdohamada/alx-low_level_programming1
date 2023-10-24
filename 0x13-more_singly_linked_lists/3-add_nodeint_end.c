#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add at end
 *
 * @head: the beginning
 * @n: the data
 *
 * Return: the nodes
 */


listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *new3;
	listint_t *last;

	last = *head;

	new3 = malloc(sizeof(listint_t));

	if (head == NULL)

		return (NULL);

	new3->n = n;
	new3->next = NULL;

	if (*head == NULL)
	{
		*head = new3;

		return (new3);

	}


	while (last->next != NULL)
	{
		last = last->next;

	}


	last->next = new3;

	return (new3);

}
