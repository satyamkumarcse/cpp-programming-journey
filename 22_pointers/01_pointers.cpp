// pointers are defined as the variable that stores a memory address of another variable  
// the reason that we use pointers, is because sometimes its easier to work with an address.

// example - i have a stack of 20 pizzas in my hand piled up (very heavy) which i want to give to my neibours. instead of going house to house and giving it to the neibours.

// its easier to go door to door and tell people where the pizza is located.

// "hey there free pizza at my house at this address, come and get some"

//  this is one of the uses of pointers.

//  ill tell people where the pizza is, rather than carrying it around with me.

// while working with pointers, we need to use (& - addressof ) operator which is also called as ampersand.

// as well as ( * - Derefrence operator)

//  (& - address of )
// ( * - Derefrence operator) 



//  lets create a pointer to a name 


#include <iostream>
using namespace std;

int main(){

    //pointers are the v'ble that stores memory address of another v'ble.

    string name = "satyam";

    // now we will create a pointer to name 
    //  where is my name v'ble located in computer's memory?
    // to create a pointer it should be of same data type as the v'ble it is pointing to. (here the pointer should of string datatype)

    string *pName = &name;      // &name ---> memory address of name

    // pointer naming will start with (small - p) --> a convention

    cout<< pName<<"\n";

    // output : 0x61fef0  
    // the pointer contains this ( 0x61fef0 ) value, it contains memory address as its value.
    // in order to access this value, we can use the derefrence operator 

    cout<<*pName; 

    // output : satyam 

    // here, i'm trying to access the value of that address that's stored within this pointer.


 


return 0;
}


/*
Pizzas → The actual data (for example, a big array, object, or struct).

Your house (where pizzas are kept) → A specific location in memory where the data is stored.

Your house address → The memory address of that data. 

Telling neighbours your address → Passing a pointer (a variable that stores that memory address).

Carrying pizzas door-to-door → Copying the entire data for each user/function instead of just sharing its address. 
*/