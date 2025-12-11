/*
it is legal to reuse the same variable name (here mynum) as long as its within a different scope.
here within the printnum function also, i have a mynum variable.

*/


#include <iostream>
using namespace std;

void printnum();

int main(){

    int mynum = 1;

    cout<<mynum<<"\n";
    printnum();

    return 0;

}

void printnum(){
    int mynum =2;  // the printnum function also have mynum variable.

    cout<<mynum;
}

// now when we print mynum, it prints 2.
// we have 2 versions of the same variable and this is fine because they are within different scopes.
