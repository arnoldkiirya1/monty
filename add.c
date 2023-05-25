#include "monty.h"

/**
 * f_add - adds the top two elements of the stack
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n += (*head)->n;
	f_pop(head, counter);
}

