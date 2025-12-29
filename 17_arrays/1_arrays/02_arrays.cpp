// if we dont know hat we want to place within an array. you can simply declare and array and assing values later.



#include <iostream>
using namespace std;
int main(){

    // string cars[];     wrong  (shows error)       // array has been declared, values will be assigned later.
    string cars[3];                            // set a size

    cars[0] = "audi";
    cars[1] = "fortuner";
    cars[2] = "ferrari"; 

    cout<<cars[1]<<"\n";
    cout<<cars[2]<<"\n";
    cout<<cars[0]<<"\n";

    // error: array size missing in 'cars'
    // basically you can declare an array then assing values later,but there is a need to set a size for the array. as it an static data structure

    return 0;
}

// 1) declare and array 
// 2) set a size
//  3) assing values later