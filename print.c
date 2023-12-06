#include "shell.h"

/**
 * print - Print a message to the standard output
 * @message: The message to be printed
 *
 * Description: This function uses the write system call
 * to print the specified message to the standard output.
 */

void print(const char *message)
{
    write(STDOUT_FILENO, message, strlen(message));
}