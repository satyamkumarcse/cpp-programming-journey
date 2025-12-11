#include <iostream>


int mynum =3; //global variable 


using namespace std;
void printnum();

int main(){
    int mynum = 1;

    

    // cout<<mynum;
    printnum();                //prints 1 (priority to local v'ble first)
    cout<<mynum<<"\n";         //prints 1 (same reason)
    cout<<::mynum<<"\n";         // prints 3   

    return 0;

}

void printnum(){
    int mynum = 2;
      

    // cout<<mynum<<"\n";    // prints 2
    cout<<::mynum<<"\n";    // prints 3
}

/*
if we had both local and global variables. a function will use any local variables first before resorting to any global variables.
*/

/*

if we want to delibretely print global version "mynum" variable, we can use the scope resolution operator.

precede v'ble name with 2 colons [::]
:: = scope resolution operator

we're using the global  version of mynum instead of the local version.
*/