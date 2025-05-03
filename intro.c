#include <stdio.h>

void hello(char[], int age);


int main(){

char name[] = "Muaddh";
int age = 26;


hello(name, age);
    return 0;
}

void hello(char name[], int age)
{
    printf("\nHello %s", name);
    printf("\nYou are  %d years old", age);
}