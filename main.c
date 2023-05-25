#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

bus_t bus = {NULL, NULL, NULL, 0};

#define MAX_LINE_LENGTH 1024

int main(int argc, char *argv[])
{
    FILE *file;
    char line[MAX_LINE_LENGTH];
    size_t size = MAX_LINE_LENGTH;
    ssize_t read_line;
    stack_t *stack = NULL;
    unsigned int counter = 0;
    char *content;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    file = fopen(argv[1], "r");
    bus.file = file;
    if (!file)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    while ((read_line = fread(line, sizeof(char), size, file)) != 0)
    {
        counter++;
        content = strtok(line, "\n");
        if (content != NULL)
        {
            execute(content, &stack, counter, file);
        }
    }

    free_stack(stack);
    fclose(file);

    return 0;
}

