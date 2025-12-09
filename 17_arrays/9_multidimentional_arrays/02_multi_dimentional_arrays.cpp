//  iterating over an 2D array and displaying the elements
/*
can be done by using a nested loops.
let us first calculate the number of rows and columns.

we have: 

cars is a 2D array with 3 rows and 3 columns.

Each element cars[i][j] is one std::string object.

One std::string → 32 bytes

One row: 3 strings → 

3×32=96 bytes

All rows: 3 rows → 
3×96=288 bytes
*/




#include <iostream>
using namespace std;

int main(){

    string cars[][3] = {{"mustang","escape","f-150"},
                    {"corvette","equinox","silverado"},
                    {"challenger","durange","ram-1500"}};

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);


    for(int i=0;i<rows;i++){

        cout<<cars[i]<<"\n";

        
    }

    /*
    output: 3 memory addresses
    0x61fe10
    0x61fe58
    0x61fea0
    these are the addresses for every inner array

    
    
    
    */



return 0;
}

// outer loop take cares of the rows
// inner loop take cares of the columns