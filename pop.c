#include "monty.h"

/**
 * f_pop - removes the top element from the stack
 * @head: stack head
 * @counter: line number
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *temp;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	*head = (*head)->next;
	free(temp);
}

