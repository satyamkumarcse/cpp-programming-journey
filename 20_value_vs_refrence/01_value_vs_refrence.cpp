// let us see differences between pass by value and pass by refrence. 
#include <iostream>
using namespace std;


void swap(string &x,string &y);


int main(){

// program for variable swap (written in main function)

string x = "water";
string y = "cold-drinks";
string temp;
// temp = y;
// y = x;
// x = temp;

swap(x,y);      

cout<<x<<"\n";   // during displaying original values  are printed, not copies.
cout<<y;


return 0;
}

//let us create a function which will return the swapped v'bles.

void swap(string &x,string &y){

    string temp = y;
    y = x;
    x = temp;


}

// we will observe that swapping dont happen

//even tho i invoked the function, the values did not switched.

// normally when we pass a variable(x,y) to a function(void)
// we passed by thier value. (read line 52 for context)
//after passing the variable, when the function is invoked(--20) it creates copies of the original values.
// we have now 2 copies of v'ble x and y
// were are actually performing (swapping operation/ balance money updation) on the two copies and not the original values.
// (--22 --23) while displaying the vlues, original values are displayed, not copies.

// if we want to change the original values and not the values of copies of these v'bles,we can use pass by refrence. use (&) (address of) operator.


// when we passed by values we created copies of x and y.
// when we use & - operator.
// we are passing the memory addresses to where the original x and y v'bles are located.

// recall the use of & operator in banking system mini project.