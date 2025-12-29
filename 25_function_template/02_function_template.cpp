
// for creating a function template, take your function and replace its datatype with 'T'
// or 'thing' or like any name
// were here using T as a common naming convention.

#include <iostream>
using namespace std;

T maxele(T x,T y){      

    return (x>y) ? x: y;

}


int main(){



    cout<<maxele(1,2)<<endl;
 


return 0;
}

