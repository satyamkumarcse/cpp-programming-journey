// when we Dereference a pointer in c++ it displays the value stored in it. 
 //some programmers check if their pointer is a null pointer before continuing.
//  kind of like a system of checks and balances

#include <iostream>
using namespace std;

int main(){


    int *pointer = nullptr;       
    int x=123;

    pointer = &x;   //when we comment entire line 14, address was not assigned is printed 

    //here we assigned the pointer : address of x. lets verify if this was done without any error or not. 

    //lets verify if my pointer contains a valid address before derefrencing it.

    if(pointer==nullptr){

        cout<<"address was not assigned";
    }
    else{

        cout<<"address was assigned";
    }
        //was my pointer assigned an address or is it still a null pointer.?


    

    //if after the verification, a pointer still comes out to be a null pointer that means we did not successfully assing an address to my pointer. 

    // there may be situations, such as working with dynamic memory where we attempt to assing an address to your pointer and it fails.
    
   
    return 0;
}
