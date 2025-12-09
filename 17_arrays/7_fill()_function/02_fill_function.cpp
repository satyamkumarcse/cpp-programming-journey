

#include <iostream>
using namespace std;

int main(){

    const int size = 10;
    string foods[size]={};

    // string foods[10]= {"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};   
    fill(foods , foods + size,"pizza");
    for(string food : foods){

        cout<<food<<"\n";
    }

    return 0;
}

// string foods[150]={}; string foods[100]={};  ETC...
/*

in place of adding numbers to the array, we can introduce a size varibale 

string foods[size]={};  (line 7-8)






*/
