#include <iostream>
using namespace std;

int main(){

    string name = "satyam";
    int age = 18;

    string *pname = &name;
    int *pAge = &age;

    cout<<"memory address of name v'ble is: "<<pname<<"\n";
    cout<<"value present in memory address of name v'ble is: "<<*pname<<"\n";

    cout<<"memory address of age v'ble is: "<<pAge<<"\n";
    cout<<"value present in memory address of age v'ble is: "<<*pAge;



}

