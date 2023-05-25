#include "monty.h"

void _push(stack_t **doubly, unsigned int cline)
{
    int n, j;

    if (!bus.arg)
    {
        fprintf(stderr, "L%u: ", cline);
        fprintf(stderr, "usage: push integer\n");
        exit(EXIT_FAILURE);
    }

    for (j = 0; bus.arg[j] != '\0'; j++)
    {
        if (!isdigit(bus.arg[j]) && bus.arg[j] != '-')
        {
            fprintf(stderr, "L%u: ", cline);
            fprintf(stderr, "usage: push integer\n");
            exit(EXIT_FAILURE);
        }
    }

    n = atoi(bus.arg);

    if (bus.lifi == 1)
        add_dnodeint(doubly, n);
    else
        add_dnodeint_end(doubly, n);
}

void _pall(stack_t **doubly, unsigned int cline)
{
    stack_t *aux;
    (void)cline;

    aux = *doubly;

    while (aux)
    {
        printf("%d\n", aux->n);
        aux = aux->next;
    }
}

void _pint(stack_t **doubly, unsigned int cline)
{
    (void)cline;

    if (*doubly == NULL)
    {
        fprintf(stderr, "L%u: ", cline);
        fprintf(stderr, "can't pint, stack empty\n");
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*doubly)->n);
}

void _pop(stack_t **doubly, unsigned int cline)
{
    stack_t *aux;

    if (doubly == NULL || *doubly == NULL)
    {
        fprintf(stderr, "L%u: can't pop an empty stack\n", cline);
        exit(EXIT_FAILURE);
    }
    aux = *doubly;
    *doubly = (*doubly)->next;
    free(aux);
}

void _swap(stack_t **doubly, unsigned int cline)
{
    int m = 0;
    stack_t *aux = NULL;

    aux = *doubly;

    for (; aux != NULL; aux = aux->next, m++)
        ;

    if (m < 2)
    {
        fprintf(stderr, "L%u: can't swap, stack too short\n", cline);
        exit(EXIT_FAILURE);
    }

    aux = *doubly;
    *doubly = (*doubly)->next;
    aux->next = (*doubly)->next;
    aux->prev = *doubly;
    (*doubly)->next = aux;
    (*doubly)->prev = NULL;
}

