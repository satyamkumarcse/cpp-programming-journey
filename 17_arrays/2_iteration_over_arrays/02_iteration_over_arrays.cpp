// using i parameter is not the best solution here, as changes can be done in the size of the array, we have to manually change i then.
// use sizeof() concept here


#include <iostream>
using namespace std;

int main(){
    string students[]={"satyam","ramesh","suresh","geeta","shushant","donnumber1"};


    for(int i=0;i<sizeof(students)/sizeof(string);i++){
        cout<<students[i]<<"\n";
    }


return 0;
}