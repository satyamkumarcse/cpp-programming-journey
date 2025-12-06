// do while loops = do some blocks of code first, and then repeat again if condition is true.

#include <iostream>
using namespace std;

int main(){

    int number;



    while(number<0){
        cout<<"enter a positive number: ";
        cin>>number;
    }

    cout<<"the number is: "<<number;

    return 0;
}
// this loop wont work, as 0<0 is false. directly number is : 0, is printed.


