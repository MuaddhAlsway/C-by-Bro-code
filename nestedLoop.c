#include <stdio.h>

int main() {
    int i, j;

    // Outer loop
    for(i = 1; i <= 4; i++){
        for(j =1; j <= 5; j++){
            printf("i = %d, j = %d\n" , i, j);
        }
        printf("\n");
    }

    return 0;
}