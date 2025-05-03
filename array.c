#include <stdio.h>


int main(){

    double Me[5] = {10.0 , 20.0, 30.0 , 50.0, 100.0};
    
    printf("Me[0] = %.1f \n", Me[0]);
        printf("Me[1] = %.1f \n", Me[1]);


    double Mo[5];
    Mo[0] = 10.0;
    Mo[1] = 20.0;
    Mo[2] = 30.0;
    Mo[3] = 50.0;
    Mo[4] = 100.0;
    printf("Mo[0] = %.1f \n", Mo[0]);
    return 0;
}