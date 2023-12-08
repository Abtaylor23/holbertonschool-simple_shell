#include "main.h"

char **find_path(void) {
    char **some_pointer;

 
    some_pointer = (char **)malloc(sizeof(char *) * SIZE); 
    if (some_pointer == NULL) {
        
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }



    return some_pointer;
}