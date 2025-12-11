#include <iostream>


int mynum =3; //global variable ( A true global variable (declared outside all functions) is accessible in both main and in user‑defined functions in the same file. its basically accessible to all the functions present within the program)



using namespace std;
void printnum();

int main(){

    

    // cout<<mynum;
    printnum();
    cout<<mynum;

    return 0;

}

void printnum(){
      

    cout<<mynum<<"\n";
}

// 3 will be printed as the answer
/*
its best of avoid using global variables if you can, because it pollutes the global namespace.
also variables which are declared within a function are much more secured. 
as functions cant see inside of other functions
*/


