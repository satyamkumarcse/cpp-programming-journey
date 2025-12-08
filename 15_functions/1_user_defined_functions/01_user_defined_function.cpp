// functions --> can be defined as block of resuable code.
//  int main(){} --> main function
// syntax:   void function_name(){}
/*
eg- function to sing happy birthday

void happyBirthday(){}

its similar to main function. the main function has return type. return 0;

in main(){} write happybirthday();  
this invokes the function (calls it for execution)
*/


#include <iostream>
using namespace std;

void happy_birthday(){

    cout<<"happy birthday to youu!!!\n";
    cout<<"happy birthday to youu!!!\n";
    cout<<"happy birthday Dear Satyam !!!\n";
    cout<<"may god bless you!!!\n";
    cout<<"happy birthday to youu!!!\n\n";


}

int main(){

    happy_birthday();
    // happy_birthday(); // (the function can be called multiple times also)
    // happy_birthday();

    return 0;
}

