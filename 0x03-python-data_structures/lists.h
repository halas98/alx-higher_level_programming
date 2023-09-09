#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * struct listint_s - A singly linked list node
 * @n: An integer stored in the node
 * @next: A pointer to the next node in the list
 *
 * Description: Defines a node structure for a singly linked list.
 * This structure is used for a Holberton project.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

void reverse_listint(listint_t **head);
int is_palindrome(listint_t **head);

#endif /* LISTS_H */
