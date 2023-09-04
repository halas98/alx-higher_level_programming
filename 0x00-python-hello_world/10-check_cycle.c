#include "lists.h"
#include <stdlib.h>

/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
    listint_t *slow = list;
    listint_t *fast = list;

    while (slow && fast && fast->next)
    {
        slow = slow->next;        /* Move one step at a time */
        fast = fast->next->next;  /* Move two steps at a time */

        if (slow == fast)         /* If they meet, there's a cycle */
            return (1);
    }

    return (0);  /* If we reach the end, there's no cycle */
}

