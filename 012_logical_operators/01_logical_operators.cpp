/*
&& = check if two conditions are true simultanesouly (and)
|| = check if atleast one of the two conditions is true (or)
! = reverses the logical state of its operand (not)
*/

#include <iostream>
using namespace std;
int main()
{ 
    int temp;
    bool sunny = false;
    cout<<"enter a temperature: ";
    cin>>temp;


    // if(temp>15 && temp<35){
    //     cout<<"the temp is good!";   (and)

    // }
    if (temp<=15 || temp>=35){
        cout<<"the temp is bad\n";    // (or)

    }
    else{
        cout<<"temp is good\n";


    }

    if (!sunny){

        cout<<"it is sunny outside";
    }
    else{

        cout<<"it is cloudy outside";
    }

    return 0;
}