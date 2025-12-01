//in our new example, let us create typedef for standard strings

#include <iostream>
#include <vector>

typedef std::string text_t;
typedef int number_t;


int main(){

    // std::string name = "satyam"; //(instead of this)
    text_t name = "satyam"; // (this works now)

    // int age=19; (instead of this)
    number_t age=19;
    
    std::cout<<"my name is "<<name<<" i'm "<<age<<" years old.";





    return 0;
}

// note#
/*
typedef has been largely replaced with "using" keyword, as it works better with templates(tempelates will be taught later)
*/