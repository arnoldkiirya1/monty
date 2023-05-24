#include "monty.h"

void f_pint(stack_t **head, __attribute__((unused)) unsigned int number)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pint, stack empty\n", bus.content);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*head)->n);
}

