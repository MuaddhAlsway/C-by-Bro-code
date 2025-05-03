#include <stdio.h>

enum  Day {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7};


int main(){

    enum Day today = tue;
    printf("Day %d\n", today);


    if(today == 1 || today == 7){
        printf(" It's the Weekend: Sleep time and Hang out with my family and friends\n");
    }
    else
    {
        printf("It's a Weekday: Work time and Study time\n");
    }
    
        return 0;
}