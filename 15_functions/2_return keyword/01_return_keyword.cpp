// return keyword --> it will return a value back to the place where you called the encompassing function.
/*
its commonly found at the end of a function. eg- the main function.
when we invoke a function, we can return some value back.

*/

#include <iostream>
using namespace std;

double square(double length){
    
    // cout<<"The area is "<<l*l;
    
    return length*length;  // {if we are returning a value from a function, we need to change the keyowrd "void" to match the datatype of what we are returning. here its double }


}

int main(){
    double length = 6.0;
    double area = square(length);
    cout<<"area "<<area<<"cm^2\n";
    
return 0;
}