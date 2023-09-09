nclude "lists.h"
/**
 * reverse_listint - Reverses the order of a linked list.
 * @head: A pointer to the first node in the list.
 *
 * Return: A pointer to the first node in the reversed list.
 */

void reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}
/**
 * is_palindrome - Determines if a linked list is a palindrome.
 * @head: A double pointer to the linked list.
 *
 * This function checks whether the linked list, starting from the given
 * head, forms a palindrome (a sequence that reads the same forwards
 * and backwards).
 *
 * Return: 1 if the linked list is a palindrome, 0 otherwise.
 */

int is_palindrome(listint_t **head)
{
	listint_t *slow = *head, *fast = *head, *temp = *head, *dup = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (1)
	{
		fast = fast->next->next;
		if (!fast)
		{
			dup = slow->next;
			break;
		}
		if (!fast->next)
		{
			dup = slow->next->next;
			break;
		}
		slow = slow->next;
	}

	reverse_listint(&dup);

	while (dup && temp)
	{
		if (temp->n == dup->n)
		{
			dup = dup->next;
			temp = temp->next;
		}
		else
			return (0);
	}

	if (!dup)
		return (1);

	return (0);
}
