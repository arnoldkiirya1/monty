#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *current = head;
	stack_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

