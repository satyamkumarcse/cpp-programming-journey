#include <iostream>
using namespace std;

int main()
{
    double c;
    double f;
    char scale;
    cout<<"enter the temperature scale (C/F) you want to convert to: ";
    cin>>scale;

    if(scale=='F' || scale=='f'){
        cout<<"enter value of C";
        cin>>c;
         f = 32 + 1.8*c;
         cout<<"the value after converting in F is: "<<f<<"F";

    }
    else if(scale=='C' || scale=='c'){
        cout<<"enter value of F: ";
        cin>>f;
          c=(f-32)/1.8;
         cout<<"the value after converting in C is: "<<c<<"C";

    }
    else{

        cout<<"please enter a suitable scale (C/F)";
    }





    return 0;
}