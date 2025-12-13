
#include <iostream>
using namespace std;

int main(){


    int *pointer = nullptr;       
    int x=123;

    pointer = &x;
    
    // if a pointer is still a null pointer (comment out/in line 11). its not safe to derefrence it.
    // thus it would be safe to derefrence a pointer within the else statement.
    //  instead of derefrencing it outside the loop.
    

    if(pointer==nullptr){

        cout<<"address was not assigned";
        
    }
    else{

        cout<<"address was assigned"<<"\n";
        cout<<*pointer;
        

    }
    
   
    return 0;
}
//  conclusion :
// a pointer should either point at an address or at the nullptr keyword.
// because otherwise, we dont know where its pointing originally.
// derefrencing nullptr or pointing to free memory causes undefined behavior.