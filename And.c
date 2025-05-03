#include <stdio.h>
#include <stdbool.h>

int main(){

    //float temp =1000; one condition is true so the weather is bad
    float temp =25; 
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){
        printf("\nThe weather is good!");
    }
    else{
        printf("\nThe weather is bad!");
    }



    return 0; 
}