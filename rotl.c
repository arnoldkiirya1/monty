#include "monty.h"

void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp;
	stack_t *first;

	if (*head == NULL || (*head)->next == NULL)
		return;

	tmp = *head;
	first = *head;

	while (tmp->next)
		tmp = tmp->next;

	*head = first->next;
	(*head)->prev = NULL;
	first->next = NULL;
	first->prev = tmp;
	tmp->next = first;
}

