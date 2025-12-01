
#include <iostream>

namespace first{

    int x = 1;
}

namespace second {

    int x = 2;
}

int main(){
    // using namespace first ;
    using namespace second;



    std::cout<<x; //(no need to add that prefix here)

    return 0;
}
