
#include <iostream>

namespace first{

    int x = 1;
}

namespace second {

    int x = 2;
}

int main(){

    int x=0; //local (so x=0 will be displayed not x=1)
    std::cout<<x;

    return 0;
}



/*

:: --> are known as scope resolution operator.


{first,second,third....so on, these are the "name" of namespace}


*/