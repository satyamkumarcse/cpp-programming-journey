/*
here we have declared string name; in main function, and trying to call it in the birthday function which was user defined. lets see the issue.

issue: 'name' was not declared in this scope

*/


#include <iostream>
using namespace std;


void happy_birthday(string birthday_boy, int age);

int main(){
    string birthday_boy = "satyam";
    int age = 18;
    

    happy_birthday(birthday_boy,age);
    happy_birthday(birthday_boy,age);

    return 0;
}



void happy_birthday(string birthday_boy, int age){

    cout<<"happy birthday to "<<birthday_boy<<"\n";
    cout<<"happy birthday Dear"<<birthday_boy<<"\n";
    cout<<"may god bless you!!!\n";
    cout<<"happy birthday to "<<birthday_boy<<"\n\n";
    cout<<"happy birthday to "<<birthday_boy<<"he has turned "<<age<<" years old"<<"\n";
    


}

/*

think as main function = your house
user defined (void) function = neibours house

function cant see what going on inside of other functions.

ie- in order for the "happy_birthday" function to use the main function's "name" variable it needs to be made aware of it.


here im trying to make happybirthday function aware of this "name" v'ble which is present within the main function.

when you send some data over to a function that data is also known as arguement, and for the receiving function its known as parameter.

void happy_birthday(datatype v'ble)
: void happy_birthday(string name)

*/