//in order to actually display the elements, we have to do this



#include <iostream>
using namespace std;

int main(){

    string cars[][3] = {{"mustang","escape","f-150"},
                    {"corvette","equinox","silverado"},
                    {"challenger","durange","ram-1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

        for(int i=0;i<rows;i++){


            for(int j=0;j<columns;j++){

            cout<<cars[i][j]<<" ";
        }
        cout<<"\n";

    }
    return 0;

        
    }
