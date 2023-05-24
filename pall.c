#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, __attribute__((unused)) unsigned int number)
{
    stack_t *current = *head;

    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
