#include <stdio.h>
#include <string.h>

int main() {
    char name[25];  // Properly declare the array
    name[0] = '\0'; // Initialize to an empty string

    while (strlen(name) == 0) {  // Check if the name is empty
        printf("\nWhat's your name? ");
        fgets(name, 25, stdin);
        
        // Remove the newline character, if it exists
        if (name[strlen(name) - 1] == '\n') {
            name[strlen(name) - 1] = '\0';
        }
    }

    printf("Hello %s!\n", name);  // Use %s to print the string
    return 0;
}