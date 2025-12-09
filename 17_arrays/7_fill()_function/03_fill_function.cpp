
#include <iostream>
using namespace std;

int main(){

    // const int size = 10;
    const int size = 18;      // for case 3

    string foods[size]={};


    // fill(foods , foods + size/2,"pizza");    // case 1: if i want to fill first half of the array with pizza.  do this. the rest is empty.




    // case 2 : second half with amburgers.
     fill(foods , foods + size/3,"pizza"); 
      fill(foods + size/3, foods + 2*size/3,"hamburgers"); 
      fill(foods + 2*size/3, foods + size,"hotdogs"); 


    //  case 3 : pizza,hamburgers,hotdogs evenly.




    for(string food : foods){ 

        cout<<food<<"\n";
    }

    return 0;
}
