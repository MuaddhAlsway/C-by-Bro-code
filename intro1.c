#include <stdio.h>


int main(){

char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
    case 'A' :
        printf("perfect!\n");
        break;
    case 'B':
        printf("good");
        break;
    case 'C' :
        printf("not bad");
        break;
    case 'F' :
        printf("Failure");
    default:
    printf("Please enter only valid grades");
    }    
}
