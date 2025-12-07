#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    
    char x;
    cout<<"enter the v'ble a: ";
    cin>>a;
    cout<<"enter the v'ble b: ";
    cin>>b;
    

    cout<<"enter an operation to perform: [+,-,*,/,^]";
    cin>>x;

    if(x=='+'){
        cout<<a+b;

    }
    else if(x=='-'){
        cout<<a-b;
    }
    else if(x=='*'){
        cout<<a*b;
    }
    else if(x=='^'){
        cout<<pow(a,b);
    }

    else if(x=='/'){
        if(b!=0){

            cout<<a/b;

        }
        else{
            cout<<"cant divide by zero";
            }
        }
    else{

        cout<<"invalid operation";



    }

    return 0;



        
    }

