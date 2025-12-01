
#include <iostream>

namespace first{

    int x = 1;
}

namespace second {

    int x = 2;
}

int main(){

    int x=0; 
    // std::cout<< first::x; //(here im refrerring to the version of x, which is found within the first namespace)
    std::cout<<second::x;

    return 0;
}


// Global variable means a variable declared outside any namespace and outside any function.

// so, entities (here 1,2,0) can have same name as long as they are within a different name space.