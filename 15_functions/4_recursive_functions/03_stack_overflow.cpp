// if a base case is not given (19,26)
// we will end up in an infinite loop, known as stack overflow.
// when we invoke a function, we add a frame to the stack.
// when your stack is overloaded, you will encounter a stack overflow.

#include <iostream>
using namespace std;

void walk(int steps);

int main(){
  cout<<"enter the number of steps you want to walk: "<<endl;
   
    int steps;
     cin>>steps;
    walk(100);
    
return 0;
}


void walk(int steps){

    // if(steps==0){

    //     return 0;

    // }

    // int j = walk(int (steps - 1));
    cout<<"the step counter : "<<steps<<endl;
    walk(steps-1);
    
   
}
