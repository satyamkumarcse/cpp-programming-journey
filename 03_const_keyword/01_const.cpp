/*the const keyword specifies that a variables's value is constant. tells the compiler to prevent anything from modifying it.
(read only) mode */

#include <iostream>

int main(){


    // double pi = 3.14159265;
    // pi = 4000; (this we dont want) so we use 

    const double PI = 3.14159265;

    // PI = 4000;  (now an error will be shown, that pi value is const (read only variable) ) 
    double r = 10;
    double circumference = 2*PI*r;

    std::cout<<"the circumference is "<<circumference<<" cm";



    return 0;
}

/*value of pi is always a constant value, someone can just change the value of pi in program and get wrong results. const is used for fixing the value of pi.

adding const gives datasecurity.
if we are using const for a variable. convetion is to write its name in PI*/