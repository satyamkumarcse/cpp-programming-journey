// variables can have same name, as long as they are in different function.

double getsum(double prices[]);

#include <iostream>
using namespace std;

int main(){

    double prices[]={7.99,8.99,6.50,5.25,4.50};
    double total  = getsum(prices);  // square brackets are not required


return 0;
}

double getsum(double prices[]){
    double total=0;


    for(int i=0;i<=sizeof(prices)/sizeof(prices[0]);i++){
        total+=prices[i];
    }
    return total;


}

// the following code will not execute, it will show an error. 
// when we pass an array to a function, it decays to what we know as a pointer.
// within the function "double getsum(double prices[])" we are not dealing with an array anymore, we are dealing with a pointer that points to the address of where the array begins
// the function has no idea, how big the array is.
// we cant calculate how big this array is.

// in order to deal with this, on line 11. when we invoke the function. we can pass the array as well as the size of the array.