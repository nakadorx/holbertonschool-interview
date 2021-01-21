#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* is_palindrome - holberyton.
* @head: int
* Return: 0 .
*/
int is_palindrome(listint_t **head)
{
listint_t *fst; 
listint_t *lst;
if (!(*head) || (!(*head)->next))
return (1);

lst = *head;
while (lst->next)
lst = lst->next;
fst = *head;
while (lst >= fst)
{
if (!(fst->n == lst->n))
return (0);

else
{      fst = fst->next;
lst -= 2;}
}
return (1);
}
