// pass by refrence (&x,&y) should be used more often, especially when we are altering the values of the vbles that we are passing in the void from main fxn.


#include <iostream>
using namespace std;


void swap(string x,string y);


int main(){


string x = "water";
string y = "cold-drinks";
string temp;
;

swap(x,y);      

cout<<&x<<"\n";
cout<<&y<<"\n";


return 0;
}


void swap(string x,string y){

    string temp = y;
    y = x;
    x = temp;

    cout<<&x<<'\n';
    cout<<&y<<"\n";


}

/*
output: 

0x61fef8
0x61fee0
0x61fec4
0x61feac


the original x vble has different memory address than the one presnet within the fxn. same with y
also remember variables can have same name if within different fxn.
so 2 differnet x,y. in toal 4 different v'ble were created. 
the v'ble x,y in void fxn, had copies of the values.

#if & is used then.
output:

0x61fef4 - x
0x61fedc - y
0x61fef4 - x (within the void fxn)
0x61fedc - y (within the void fxn)

same x,y is passed. thus swapping or updating balance is possible now.


*/