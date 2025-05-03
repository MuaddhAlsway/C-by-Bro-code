#include <stdio.h>

int main(){


    //augmented assignment operators = used to replace a statement where an operator
    //                                  takes a variable as one of its arguments
    //                                  and then assgins the result back to the same variable
    //                                  x = x + 1
    //                                  x+=1


    int x = 10;
    int z = 12;
    int y = 15;
    int r = 20;
    int o = 25;
    x+= 14;
    z-= 18;
    y*= 15;
    r/= 10;
    o%= 25;

    printf("%d \n", x);
    printf("%d \n", z);
    printf("%d \n", y);
    printf("%d \n", r);
    printf("%d \n", o);


    // x = x + 2;
    // x+= 2;

    //x = x - 3;
    //x-=3;

    //x = x * 4;
    //x*=4;

    // x = x / 5;
    // x/=5;

    //x = % 2;
    //x%=2;
}