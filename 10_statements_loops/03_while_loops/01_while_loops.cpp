// we can repeat a set of code potentially infinite amount of times.

//while loop is kind of like an if statement except it can repeat some code infinitely as long as this condition remains true.

//best use of while loop is that you can force a user to do something in order to continue with the rest of the code.


/*

In C++:

For built-in types like int,float etc... the value is initialized to 0, unless you set it.

for class types like std::string, their constructor assigns a valid state.

The default constructor of std::string creates an empty string.

in general: when a string is declared. is it bydefault empty.
x.empty() = 1 (true)
x.lenght() = 0

*/


#include <iostream>
using namespace std;
int main(){
    string name;
    // if(name.length()==0){                               //(using "if" will run the statement only once.)
    // while(name.length()==0){                            //(will run it until name lenght >0)
    while(name.empty()){                                   // (wll also work)
        cout<<"enter your name: ";
        getline(cin,name);
        
    }
    cout<<"hello "<<name;


    






    return 0;
}