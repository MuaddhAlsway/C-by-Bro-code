#include <stdio.h>

int main(){
    

    //arithmetic operators
    // + (addition)
    // - (substraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement
    /*
    
    
    */
   
    //    float z = x / y;
    //    float z = x / (double) y;
    //    float z = x / (float) y;
    /*
        ...Divide
        int z = x / y; 
    Z = 5 / 2
    = 2.5
    That's [2.5] 
    where you're wrong it's 2
    we're storing the result 
    within an integer and with integers
    we can only store whole numbers
    so we will lose that decimal portion
    it will be truncated there's a few
    things we'll need to change first
    we'll need to store the result within
    a float or a double and then let's display
    this precent f for a float 

    float z = x / y; 

    we'll need to change first we'll need to
    store the result within float or a double
    and then let's display this percent f

    another thing that we need to change too
    and that involves integer division if 
    we're dividing by an integer we'll truncate that
    that decimal portion 

    there's one of two things we can do either
    change our divisor to a float 

    if I would like to keep  y as an integer and we divide x
    x by y we will convert 2 into a float so [2.0]
    and store the result within float z and the result is
    2.5 so if you're performing division with any integers
    you need to buy attention [integer division] and you  may 
    need to cast your divisor as a float or as as double
    */

    /*
        .. Modules
        1. gives you the remainder of any division 
            5 does not divide by 2 evenly 
            
            [int z = x %  y]
        IF we want to display z
        so make sure to change your format specifier 
        if you didn't the remainder of five divided by 
        two is one if this was four divides by
        two evenly and the result is going to be zero

        modulus gives you the remainder of any division

        it's actually pretty helpful to find if a number is 
        even odd all you do is say modulus 2 or some variable
        containing the value of 2
        either way and then we can increment or decrement a number by 1.

        if I need to increment x for some reason you'll see
        this when we get to the video on loops
        
        x++
        let's dispaly x
        6

        y--

        
    */

    int y = 2;
    int x = 5;
    x++;
    y--;
    int z = y + x;
    printf("%d", z);
    printf("%d", x);
    printf("%d", y);
    return 0;
}