#include "monty.h"

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;
	stack_t *last;

	if (*head == NULL || (*head)->next == NULL)
		return;

	copy = *head;
	last = *head;

	while (copy->next)
		copy = copy->next;

	copy->next = last;
	last->prev = copy;
	*head = copy;
	last->next->prev = NULL;
	last->next = NULL;
}

