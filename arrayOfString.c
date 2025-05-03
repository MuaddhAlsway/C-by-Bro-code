#include <stdio.h>
#include <string.h>

int main() {
    // Define an array of strings
    char *arrayOfStrings[] = {
        "Hello",
        "World",
        "This",
        "Is",
        "An",
        "Array",
        "Of",
        "Strings"
    };

    // Calculate the number of strings in the array
    int numberOfStrings = sizeof(arrayOfStrings) / sizeof(arrayOfStrings[0]);

    // Print each string in the array
    for (int i = 0; i < numberOfStrings; i++) {
        printf("%s\n", arrayOfStrings[i]);
    }

    return 0;
}