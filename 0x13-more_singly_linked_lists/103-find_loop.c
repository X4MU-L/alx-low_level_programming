#include "lists.h"

/**
 * find_listint_loop - finds the address of a loop in a linked list
 * @head: pointer to the first node in the list
 * Return: returns the address of the loop node
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fast = head;
	listint_t *slow = head;

	while (slow && fast && fast->next)
	{
		fast = fast->next->next;
		slow = slow->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				fast = fast->next;
				slow = slow->next;
			}
			return (fast);
		}
	}

	return (NULL);
}
