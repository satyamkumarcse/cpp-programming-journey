/*                   

                           { null value }

a null value is a special value that means something has no value.
when a pointer is holding a null value,it means that pointer is not pointing at anything. (null pointer)

nullptr = keyword representing null pointer literal

null pointers are helpful when determining if an address was successfully assigned to a pointer.

if we create a pointer and dont assing it a value, we would dont know where its pointing to. 

it would be good practice to make sure that particular pointer which has not been assigned a value dont point anywhere randomly.

lets create a null pointer


*/ 


#include <iostream>
using namespace std;

int main(){

    // int *pointer;               //instead of not assinging a value 

    int *pointer = nullptr;        // do this

    // later on in the program, if you need to assing an address. say....

    int x=123;

    pointer = &x;

    cout<<pointer<<endl;    //prints the memory address
    cout<<*pointer<<endl;   //prints the value stored at the memory address.



return 0;
}