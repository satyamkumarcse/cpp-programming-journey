/*
array is a data structure that can hold multiple values. 
its an static data structure.
values are accessed by an index number ie- indexing is defined.
kind of like a variable that can hold multiple values.
 

*/

#include <iostream>
using namespace std;
int main(){

    string car = "audi";                                             // (car is a variable that has stored a single car brand name)
    string cars[] = {"audi","bugatti","mercedes","fortuner"};            // (variable car is now an array, it has stored name of various car brands)
    cout<<cars;
    //output : 0x61fe9c 
    // the following output is basically the memory address of where our array is located. eg- 123fakestreet etc.....
    cout<<"\n"<<cars[0];
    cout<<"\n"<<cars[1];
    cout<<"\n"<<cars[3];
    cout<<"\n"<<cars[2]<<"\n";
    // in order to access an element of an array, we write like this.
    cars[0] = "alto a7";
    cout<<cars[0];
    // we can also reassign values to an element of the array.
    // #note - arrays can only hold values of same data type (unlike python)


    return 0;
}

