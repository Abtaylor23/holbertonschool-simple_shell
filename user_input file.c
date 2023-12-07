#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_command - Read user input from the standard input
 * @command: The array to store the user input
 * @size: The size of the command array
 *
 * Description: This function reads a line of text from the
 * standard input and stores it in the provided command array.
 * It handles potential errors during input and removes the
 * trailing newline character.
 */
void read_command(char *command, size_t size)
{
    if (fgets(command, size, stdin) == NULL)
    {
        if (feof(stdin))
        {
            printf("\n");
            exit(EXIT_SUCCESS);
        } else
        {
            fprintf(stderr, "Error while reading input.\n");
            exit(EXIT_FAILURE);
        }
    }
    
    
    size_t length = strlen(command);
    if (length > 0 && command[length - 1] == '\n') {
        command[length - 1] = '\0';
    }
}


