//  fill() = fills a range of elements with specfied value.
//                fill(begin,end,value)
// begin = begenning address of a data structure. (array name)
// end = ending address  ---> array name + size of array.
//  value --> that has to be printed repetedly.


#include <iostream>
using namespace std;

int main(){

    string foods[10]= {"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza"};   // writing manually pizza 10 times...or for eg 100 times is not practical. there are few solutions for this. one is to use fill function.
    for(string food : foods){

        cout<<food<<"\n";
    }



    return 0;
}