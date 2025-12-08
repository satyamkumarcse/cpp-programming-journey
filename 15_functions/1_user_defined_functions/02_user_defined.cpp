
/*some programmers prefer to write function block of code below the main(){} function for improving readability. but that is not possible in cpp. 
the compiler reads the code from up to down, as the funciton is invoked before even its declared. */



#include <iostream>
using namespace std;


int main(){

    happy_birthday();


    return 0;
}


void happy_birthday(){

    cout<<"happy birthday to youu!!!\n";
    cout<<"happy birthday to youu!!!\n";
    cout<<"happy birthday Dear Satyam !!!\n";
    cout<<"may god bless you!!!\n";
    cout<<"happy birthday to youu!!!\n\n";


}



/*
one solution is to declare functions at top. but define them later.
*/
