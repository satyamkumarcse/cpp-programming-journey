
#include <iostream>
using namespace std;

int main(){

    int number;


     cout<<"enter a positive number: ";
        cin>>number;



    while(number<0){
        cout<<"enter a positive number: ";
        cin>>number;
    }

    cout<<"the number is: "<<number;

    return 0;
}


// the loop will run once, if the number is positive, the answer will be printed simply, otherwise the while loop condition will be executed and program will again ask for a positive number. but this is not the best solution.

//we can write it effectively as.