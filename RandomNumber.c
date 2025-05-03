#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){


    srand(time(0));
    int randomNumber1 = (rand() % 6 + 1);
    int randomNumber2 = (rand() % 6 + 1);
    int randomNumber3 = (rand() % 6 + 1);


    printf("The random number is %d\n", randomNumber1);
    printf("The random number is %d\n", randomNumber2);
    printf("The random number is %d\n", randomNumber3);



    return 0;
}