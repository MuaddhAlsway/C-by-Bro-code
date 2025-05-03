#include <stdio.h>
#include <stdbool.h>

int main(){

    //float temp =1000; one condition is true so the weather is bad
    // logical operator ! Not reverse the state of a condtiton

    float age = 21; 
    bool legal = false;
    char name[] = "Adult";

    if(!age >= 25 || !legal){
        printf("\nYou can take a test of drive!", name);
    }
    else{
        printf("\nYou are not in legal age");
    }



    return 0; 
}