
#include <iostream>
using namespace std;

int main(){
    string students[]={"satyam","ramesh","suresh","geeta"};

    cout<<students[0]<<"\n";
    cout<<students[1]<<"\n";
    cout<<students[2]<<"\n";
    cout<<students[3]<<"\n\n";

    // instead of writing like this, iterate over the array using for loop.

    for(int i=0;i<3;i++){
        cout<<students[i]<<"\n";
    }


return 0;
}
// using i parameter is not the best solution here, as changes can be done in the size of the array, we have to manually change i then.
// use sizeof() concept here