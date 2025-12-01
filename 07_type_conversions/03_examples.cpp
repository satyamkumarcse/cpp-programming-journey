/*

The Rule of Integer Division in C++


Operands Must Be Integers: When you use the division operator (/) and both the numerator and the denominator are of an integer type (like int, long, short), the operation performed is integer division.

Result is Truncated: The mathematical result of the division is calculated, and then the fractional part is truncated (discarded). This process moves the result toward zero.

Result is an Integer: The final result of the operation is an integer type



*/



#include <iostream>

int main(){


    int correct = 8;
    int questions = 10;
    double percentage = (double)correct/questions *100;


    std::cout<<percentage<<"%"; //(the output will be 0. as 0.8 becomes 0, then is multipled by 100.

    return 0;

}


/* 
To get the floating-point (decimal) result, you need to ensure that at least one of the operands is a floating-point type (like double or float). This causes C++ to perform floating-point division.


*/