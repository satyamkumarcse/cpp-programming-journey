// there are different datatypes depending on what you need to store within a variable exactly

// int datatype stores integer 

#include <iostream>

int main(){

    // 1) integer (whole number) 


    int age = 21;
    int days = 7.5;
    int year = 2025;

    // std::cout<<days; 

    
    // output = 7 (the decimal was is truncated)
    // for decimals we have different datatype that is double 

    // 2) double (number including decimal)


    double price = 29.55;
    double gpa = 9.23;
    double temp = 25.1;

    // std::cout<<price;
    // output: 29.55

    //the decimal portion now not truncated 

    // 3) char datatype : it stores a single character

    char grade = 'A';
    char initial = 'M'; 
    char currency = '$';


    // if we attempt to store more than 1 variable
    
    // char exp = 'MC'; 
    //this wont work we will get an overflow

    // std::cout<< exp;
    // std::cout <<initial;


    // 4) boolean (true or false) 

    bool student = true;
    bool lightswitch = false;
    bool forsale = true;



    // 5) string (objects that represents a sequence of text) (same as python)

    std::string name = "satyam";
    std::string day = "friday";
    std::string food = "pizza";
    std::string address = "123 fake street ";

    // std::cout<<address;


    // litreally printing a string literal 

    std::cout << "hello "<<name <<std::endl;
    std::cout << "you are "<< age << " years old";

    return 0;
}





// why syntax of string datatype is different from all other?
/*

string is not a primitive (built-in) data type

these are: 

int
float
double
char
bool

are built into the C++ language itself (primitive datatypes).
So their syntax is very short and simple.

But string is actually a class in C++

std::string comes from the Standard Template Library (STL).
It is not built-in, it is defined as a class in <string> header.

*/




