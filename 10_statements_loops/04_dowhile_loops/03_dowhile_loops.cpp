
#include <iostream>
using namespace std;

int main(){

    int number;




   do{
        cout<<"enter a positive number: ";             // do this 2 line of code once, and then check the condition.
        cin>>number;
    } while(number<0);

    cout<<"the number is: "<<number;

    return 0;
}

