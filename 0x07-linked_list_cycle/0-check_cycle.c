#include "lists.h"

/**
 * check_cycle - holb
 * @list: int
 *
 * Return: 0
 */
int check_cycle(listint_t *list)
{
	listint_t *slow;
	listint_t *fast;

	slow = list;
	fast = list;
	while (fast && slow&& fast->next)
	{
		slow = slow->next;
		fast  = fast->next->next;
		if (slow == fast)
			return (1);
		}
	return (0);
}
