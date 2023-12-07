#include "shell.h"
#include "input.h"

/**
 * main - Entry point of the program
 *
 * Description: This function initializes the shell and enters
 * an infinite loop to continuously prompt the user for input,
 * read the input, and execute corresponding commands.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
    char command[128];
    while (1) {
        display_prompt();
        user_input(command, sizeof(command));
        execute_command(command);
    }
    return 0;
}