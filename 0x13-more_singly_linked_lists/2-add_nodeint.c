#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - function place a node at beginning
 *
 * @head: pointer to head
 * @n: data of node
 *
 * Return: the new node
 *
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	if (head == NULL)

		return (NULL);

	listint_t *new1;

	new1 = malloc(sizeof(listint_t));

	new1->n = n;
	new1->next = *head;
	*head = new1;

	if (new1 == NULL)

		return (NULL);

	else

		return (new1);


}

