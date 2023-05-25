#include "monty.h"

void f_swap(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	int temp;
	stack_t *first;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		exit(EXIT_FAILURE);
	}

	first = *head;
	temp = first->n;
	first->n = first->next->n;
	first->next->n = temp;
}

