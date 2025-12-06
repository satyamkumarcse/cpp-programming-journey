#include <iostream>
using namespace std;
int main(){




    double a;
    double b;
    char operation;


    cout<<"enter the number (a)";
    cin>>a;
    cout<<"enter the number (b)";
    cin>>b;
    cout<<"enter the operation you want to peform";
    cin>>operation;

    switch(operation){
        case '+':
        cout<<a+b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<<"invalid operation";


    }

    return 0;
}