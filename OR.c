#include <stdio.h>
#include <stdbool.h>

int main(){

    //float temp =1000; one condition is true so the weather is bad
    float temp = 10000; 

    if(temp <= 0 || temp >= 30){
        printf("\nThe weather is bad!");
    }
    else{
        printf("\nThe weather is good!");
    }



    return 0; 
}