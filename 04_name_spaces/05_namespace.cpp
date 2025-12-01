// if we need x found within the second namespace, we would still need to prefix it
#include <iostream>

namespace first{

    int x = 1;
}

namespace second {

    int x = 2;
}

int main(){
    
    using namespace first;
    
    std::cout<<second::x; 

    return 0;
}


