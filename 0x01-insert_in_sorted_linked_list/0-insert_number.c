#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_node - addnode
 * @head: pointer
 * @number: int
 * Return: 0
 */

listint_t *insert_node(listint_t **head, int number)
{

	listint_t *n = NULL;
    listint_t *x = NULL;

	n = malloc(sizeof(listint_t));
	n->n = number;
	n->next = NULL;
	if (!*head)
	{
		*head = n;
		return (*head);
	}
	x = *head;
	if (!(n->n < x->n))
	{
        while (x->next && x->next->n < n->n)
		{
			x = x->next;
		}
		n->next = x->next;
		x->next = n;
		return (n);
	}
	else
	{
		n->next = x;
		*head = n;
		return (*head);
	}
}
