#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line number (unused)
 * Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	stack_t *copy = *head;
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}

