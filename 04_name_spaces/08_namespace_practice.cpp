#include <iostream>

namespace pehla{

   int z=1;

}

namespace dusra{

   int z=2;

}

namespace tisra{

   int z=3;

}
int main(){
    using namespace std;
    // using namespace tisra;

    // std::cout<<z;
    std::string name="satyam";
    string name="satyam";

    int z=0;

    std::cout<<z<<name;
    cout<<z<<name;
    // std::cout<<dusra::z;


    return 0;

}