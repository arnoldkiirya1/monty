#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>

/* Data structure for the stack */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/* Function prototypes */
void push(stack_t **stack, int value);
void pall(stack_t **stack);

#endif /* MONTY_H */
